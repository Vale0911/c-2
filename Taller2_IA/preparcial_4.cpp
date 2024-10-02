#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

struct Modelo {
    string nombre;
    int existencias;
};

unordered_map<int, Modelo> inventario = {
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

void mostrarInventario() {
    cout << "\nInventario actual:" << endl;
    for (const auto& par : inventario) {
        cout << "ID: " << par.first << ", Modelo: " << par.second.nombre << ", Existencias: " << par.second.existencias << endl;
    }
}

bool procesarPedido(const unordered_map<int, int>& pedido) {
    for (const auto& par : pedido) {
        int id_modelo = par.first;
        int cantidad = par.second;

        if (inventario.find(id_modelo) == inventario.end() || inventario[id_modelo].existencias < cantidad) {
            return false; // No se puede suplir el pedido
        }
    }

    for (const auto& par : pedido) {
        inventario[par.first].existencias -= par.second;
    }

    return true; // Pedido procesado exitosamente
}

void realizarCompra() {
    unordered_map<int, int> pedido;
    string entrada;

    cout << "Ingrese su pedido (ID y cantidad). Ejemplo: 0 2 para 2 piezas del modelo con ID 0." << endl;
    cout << "Escriba 'fin' para terminar el pedido." << endl;

    while (true) {
        cout << "ID y cantidad: ";
        getline(cin, entrada);

        if (entrada == "fin") {
            break;
        }

        istringstream iss(entrada);
        int id_modelo, cantidad;
        iss >> id_modelo >> cantidad;

        if (inventario.find(id_modelo) != inventario.end() && cantidad >= 1 && cantidad <= 5) {
            if (pedido.find(id_modelo) != pedido.end()) {
                pedido[id_modelo] += cantidad;
            } else {
                pedido[id_modelo] = cantidad;
            }
        } else {
            cout << "ID de modelo no válido o cantidad fuera de rango (1-5)." << endl;
        }
    }

    if (pedido.size() > 10) {
        cout << "No se pueden pedir más de 10 modelos diferentes." << endl;
        return;
    }

    if (procesarPedido(pedido)) {
        cout << "Compra exitosa. Detalle del pedido:" << endl;
        for (const auto& par : pedido) {
            cout << "Modelo: " << inventario[par.first].nombre << ", Cantidad: " << par.second << endl;
        }
    } else {
        cout << "No se puede suplir el pedido, faltan existencias para algún modelo." << endl;
    }

    mostrarInventario();
}

int main() {
    mostrarInventario();
    realizarCompra();
    return 0;
}

    realizar_compra();
    return 0;
}
