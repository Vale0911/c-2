// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include <iostream>
#include <cmath>  // Cambiado de math.h a cmath para compatibilidad C++

using namespace std;

int main() {
    // expresión matemática
    float x = 15 + (18 * (3 + 7 * 23 / 2.0 * pow(4, 0.5) + (12 * 15 - 7)));

    bool p = false; // bool is a logical type in C++ for true and false values
    bool q = false;
    // Simplificación y corrección de la expresión booleana
    // (|| o)(&& y) es equivalente a (p || q) && (!(p && q) ||
    bool y = !p || (!q && (p || (q && !q) || !(p && p || q)));

    // Corrección de la impresión en la consola
    cout << x << " " << y << endl;

    return 0;
}

