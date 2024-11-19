// Escribe un programa en C++ que pida al usuario que ingrese una cadena de texto y luego imprima esa cadena invertida.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;

    // Solicitar al usuario que ingrese una cadena de texto
    cout << "Ingrese una cadena de texto: ";
    cin >> texto;

    // Variable para almacenar la cadena invertida
    string textoInvertido;

    // Invertir la cadena
    for (int i = texto.length() - 1; i >= 0; i--) {
        textoInvertido += texto[i];
    }

    // Mostrar la cadena invertida
    cout << "La cadena invertida es: " << textoInvertido << endl;

    return 0;
}