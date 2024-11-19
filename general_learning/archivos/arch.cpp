#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Paso 1: Leer los nombres desde el archivo
    vector<string> nombres;
    string nombre;

    // Cambia la ruta al archivo según sea necesario
    ifstream archivo("nombres.txt");
    if (!archivo) {
        cerr << "Error: No se pudo abrir el archivo 'nombres.txt'." << endl;
        return 1; // Salir si no se puede abrir el archivo
    }

    while (getline(archivo, nombre)) {
        nombres.push_back(nombre);
    }
    archivo.close();

    // Paso 2: Limpiar los nombres (eliminar saltos de línea) y ordenarlos
    // En C++, no es necesario limpiar los nombres de saltos de línea si ya están bien formateados.
    sort(nombres.begin(), nombres.end());

    // Paso 3: Escribir los nombres ordenados en un nuevo archivo
    ofstream archivo_salida("nombres_ordenados.txt");
    if (!archivo_salida) {
        cerr << "Error: No se pudo abrir el archivo 'nombres_ordenados.txt'." << endl;
        return 1; // Salir si no se puede abrir el archivo
    }

    for (const auto& n : nombres) {
        archivo_salida << n << endl;
    }
    archivo_salida.close();

    cout << "Los nombres han sido ordenados y guardados en 'nombres_ordenados.txt'." << endl;

    return 0;
}