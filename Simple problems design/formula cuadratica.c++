#include <iostream> // Librería para entrada y salida estándar
#include <math.h>    // Librería para funciones matemáticas como sqrt()
using namespace std;
int main() {
    float a, b, c;   // Variables para almacenar los coeficientes de la ecuación cuadrática
    float xuno, xdos; // Variables para almacenar las dos raíces de la ecuación

   cout << "Ingrese los coeficientes a, b y c: "; // Solicita al usuario ingresar los coeficientes
   cin >> a >> b >> c; // Lee los valores de a, b y c desde la entrada estándar

    // Calcula la primera raíz de la ecuación cuadrática usando la fórmula
    xuno = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    
    // Calcula la segunda raíz de la ecuación cuadrática usando la fórmula
    xdos = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Raíz 1 (xuno) = " << xuno <<endl;
    cout << "Raíz 2 (xdos) = " << xdos <<endl;

    return 0; // Indica que el programa terminó con éxito
}
