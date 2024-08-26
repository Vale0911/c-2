#include <iostream>
using namespace std;
int main() {
    // Valores de entrada
    int x, y;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    // Inicialización de variables
    int a0 = 1, a1 = 0;
    int b0 = 0, b1 = 1;
    int x0 = x, y0 = y;

    // Primer paso
    int q1 = x0 / y0; // q = cociente de la división
    int x1 = y0;
    int y1 = x0 - q1 * y0;
    int a2 = a1;
    int a3 = a0 - q1 * a1;
    int b2 = b1;
    int b3 = b0 - q1 * b1;

    // Segundo paso
    if (y1 != 0) {
        int q2 = x1 / y1;
        int x2 = y1;
        int y2 = x1 - q2 * y1;
        int a4 = a3;
        int a5 = a2 - q2 * a3;
        int b4 = b3;
        int b5 = b2 - q2 * b3;

        // Tercer paso
        if (y2 != 0) {
            int q3 = x2 / y2;
            int x3 = y2;
            int y3 = x2 - q3 * y2;
            int a6 = a5;
            int a7 = a4 - q3 * a5;
            int b6 = b5;
            int b7 = b4 - q3 * b5;

            // Resultado final
            if (y3 != 0) {
                cout << "El MCD de " << x << " y " << y << " es " << y3 << "." << std::endl;
                cout << "Coeficientes a y b son: a = " << a7 << ", b = " << b7 << "." << std::endl;
                cout << "Esto satisface la ecuación: " << a7 << "*" << x << " + " << b7 << "*" << y << " = " << y3 << std::endl;
            } else {
                cout << "El MCD de " << x << " y " << y << " es " << y2 << "." << std::endl;
                cout << "Coeficientes a y b son: a = " << a5 << ", b = " << b5 << "." << std::endl;
                cout << "Esto satisface la ecuación: " << a5 << "*" << x << " + " << b5 << "*" << y << " = " << y2 << std::endl;
            }
        } else {
            cout << "El MCD de " << x << " y " << y << " es " << y1 << "." << std::endl;
            cout << "Coeficientes a y b son: a = " << a3 << ", b = " << b3 << "." << std::endl;
            cout << "Esto satisface la ecuación: " << a3 << "*" << x << " + " << b3 << "*" << y << " = " << y1 << std::endl;
        }
    } else {
        cout << "El MCD de " << x << " y " << y << " es " << y0 << "." << std::endl;
        cout << "Coeficientes a y b son: a = " << a1 << ", b = " << b1 << "." << std::endl;
        cout << "Esto satisface la ecuación: " << a1 << "*" << x << " + " << b1 << "*" << y << " = " << y0 << std::endl;
    }

    return 0;
}
