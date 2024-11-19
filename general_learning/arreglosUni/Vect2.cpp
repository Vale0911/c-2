// Escribe un programa que ordene un vector de números de menor a mayor usando un ciclo for.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Solicitar el tamaño del vector
    cout << "Introduce el número de elementos en el vector: ";
    cin >> n;

    vector<int> numeros(n);

    // Leer los elementos del vector
    cout << "Introduce " << n << " números (separados por espacio): ";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    // Ordenar el vector utilizando el método de burbuja
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Intercambiar los elementos
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Mostrar el vector ordenado
    cout << "Vector ordenado de menor a mayor: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}