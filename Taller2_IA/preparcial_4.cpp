#include <iostream>
#include <map>
#include <string>

using namespace std;

struct Modelo {
    string nombre;
    int existencias;
};

map<int, Modelo> inventario = {
    {0, {"Blusa A", 10}},
    {1, {"Blusa B", 15}},
    {2, {"Blusa C", 5}},
    {100, {"Falda A", 8}},
    {101, {"Falda B", 12}},
    {102, {"Falda C", 3}},
    {200, {"Jeans A", 7}},
    {201, {"Jeans B", 4}},
    {202, {"Jeans C", 10}}
};

void mostrar_inventario() {
    cout << "\nInventario actual:" << endl;
    for (const auto& item : inventario) {
        cout << "ID: " << item.first << ", Modelo: " << item.second.nombre 
             << ", Existencias: " << item.second.existencias << endl;
    }
}

bool procesar_pedido(const map<int, int>& pedido) {
    for (const auto& item : pedido) {
        if (inventario[item.first].existencias < item.second) {
            return false;
        }
    }
    
    for (const auto& item : pedido) {
        inventario[item.first].existencias -= item.second;
    }
    
    return true;
}

void realizar_compra() {
    map<int, int> pedido;
    string entrada;

    cout << "Ingrese su pedido (ID y cantidad). Ejemplo: 0 2 para 2 piezas del modelo con ID 0." << endl;
    cout << "Escriba 'fin' para terminar el pedido." << endl;

    while (true) {
        cout << "ID y cantidad: ";
        getline(cin, entrada);

        if (entrada == "fin") {
            break;
        }

        int id_modelo, cantidad;
        sscanf(entrada.c_str(), "%d %d", &id_modelo, &cantidad);

        if (inventario.find(id_modelo) != inventario.end() && cantidad >= 1 && cantidad <= 5) {
            pedido[id_modelo] += cantidad;
        } else {
            cout << "ID de modelo no válido o cantidad fuera de rango (1-5)." << endl;
        }
    }

    if (pedido.size() > 10) {
        cout << "No se pueden pedir más de 10 modelos diferentes." << endl;
        return;
    }

    if (procesar_pedido(pedido)) {
        cout << "Compra exitosa. Detalle del pedido:" << endl;
        for (const auto& item : pedido) {
            cout << "Modelo: " << inventario[item.first].nombre << ", Cantidad: " << item.second << endl;
        }
    } else {
        cout << "No se puede suplir el pedido, faltan existencias." << endl;
    }

    mostrar_inventario();
}

int main() {
    mostrar_inventario();
    realizar_compra();
    return 0;
}
