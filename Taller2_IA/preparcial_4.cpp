#include <iostream>
#include <vector>

using namespace std;

void generarLineas(vector<int>& linea0, vector<int>& linea1, vector<int>& linea2, int maxNumExistencias, int maxNumModelos) {

}

void mostrarInventario(const vector<int>& linea0, const vector<int>& linea1, const vector<int>& linea2, int maxNumModelos) {

}

void generarPedidos(vector<int>& codigosPedido, vector<int>& cantidadesPedido, int numPedidos, int maxNumCantidades) {

}

bool evaluarPedido(const vector<int>& linea0, const vector<int>& linea1, const vector<int>& linea2, const vector<int>& codigosPedido, const vector<int>& cantidadesPedido) {

    return true; 
}

int main() {
    const int maxNumExistencias = 100;
    const int maxNumModelos = 50;
    const int maxNumCantidades = 100; 

    vector<int> linea0(maxNumModelos);
    vector<int> linea1(maxNumModelos);
    vector<int> linea2(maxNumModelos);

    generarLineas(linea0, linea1, linea2, maxNumExistencias, maxNumModelos);
    
    mostrarInventario(linea0, linea1, linea2, maxNumModelos);

    int numPedidos;
    cout << "Escriba el número de modelos que quiere pedir: ";
    cin >> numPedidos;

    vector<int> codigosPedido(numPedidos);
    vector<int> cantidadesPedido(numPedidos);
    
    generarPedidos(codigosPedido, cantidadesPedido, numPedidos, maxNumCantidades);

    if (evaluarPedido(linea0, linea1, linea2, codigosPedido, cantidadesPedido)) {
        cout << "El pedido puede ser cumplido." << endl;
    } else {
        cout << "El pedido no puede ser cumplido." << endl;
    }

    return 0;
}
