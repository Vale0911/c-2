#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   

using namespace std;

void generar_lineas(vector<int>& linea0, vector<int>& linea1, vector<int>& linea2, int max_num_existencias, int max_num_modelos) {
    for (int i = 0; i < max_num_modelos; i++) {
        linea0[i] = rand() % (max_num_existencias + 1); // Generar número aleatorio entre 0 y max_num_existencias
        linea1[i] = rand() % (max_num_existencias + 1);
        linea2[i] = rand() % (max_num_existencias + 1);
    }
}

void mostrar_inventario(const vector<int>& linea0, const vector<int>& linea1, const vector<int>& linea2, int max_num_modelos) {
    for (int i = 0; i < max_num_modelos; i++) {
        cout << "Modelo " << i << ": Linea0 - " << linea0[i] << ", Linea1 - " << linea1[i] << ", Linea2 - " << linea2[i] << endl;
    }
}

void generar_pedidos(vector<int>& codigos_pedido, vector<int>& cantidades_pedido, int num_pedidos, int max_num_modelos) {
    for (int i = 0; i < num_pedidos; i++) {
        int codigo, cantidad;

        cout << "Ingrese el código del modelo a pedir (0-" << max_num_modelos - 1 << "): ";
        cin >> codigo;

        while (codigo < 0 || codigo >= max_num_modelos) {
            cout << "Error: el código debe estar entre 0 y " << max_num_modelos - 1 << "." << endl;
            cout << "Ingrese el código del modelo a pedir (0-" << max_num_modelos - 1 << "): ";
            cin >> codigo;
        }

        cout << "Ingrese la cantidad a pedir: ";
        cin >> cantidad;

        codigos_pedido.push_back(codigo);
        cantidades_pedido.push_back(cantidad);
    }
}

bool evaluar_pedido(const vector<int>& linea0, const vector<int>& linea1, const vector<int>& linea2, const vector<int>& codigos_pedido, const vector<int>& cantidades_pedido) {
    for (size_t i = 0; i < codigos_pedido.size(); i++) {
        int codigo = codigos_pedido[i];
        int cantidad = cantidades_pedido[i];

        if (cantidad > linea0[codigo] || cantidad > linea1[codigo] || cantidad > linea2[codigo]) {
            cout << "El modelo " << codigo << " no tiene suficientes existencias." << endl;
            return false;
        }
    }
    return true;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int max_num_existencias = 20;
    int max_num_modelos = 10;

    vector<int> linea0(max_num_modelos, 0);
    vector<int> linea1(max_num_modelos, 0);
    vector<int> linea2(max_num_modelos, 0);

    generar_lineas(linea0, linea1, linea2, max_num_existencias, max_num_modelos);
    
    mostrar_inventario(linea0, linea1, linea2, max_num_modelos);

    int num_pedidos;
    cout << "Escriba el número de modelos que quiere pedir: ";
    cin >> num_pedidos;

    vector<int> codigos_pedido;
    vector<int> cantidades_pedido;

    generar_pedidos(codigos_pedido, cantidades_pedido, num_pedidos, max_num_modelos);

    if (evaluar_pedido(linea0, linea1, linea2, codigos_pedido, cantidades_pedido)) {
        cout << "El pedido puede ser cumplido." << endl;
    } else {
        cout << "El pedido no puede ser cumplido." << endl;
    }

    mostrar_inventario(linea0, linea1, linea2, max_num_modelos);

    return 0;
}
