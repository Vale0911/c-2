#include <iostream>
#include <math.h> // Para usar la función sqrt()
using namespace std;
int main() {
    double a, b, hipotenusa;

    cout << "Introduce la longitud del primer cateto: ";
    cin >> a;

    cout << "Introduce la longitud del segundo cateto: ";
    cin >> b;

    hipotenusa = sqrt(a * a + b * b);

    cout << "La hipotenusa es: " << hipotenusa <<endl;

    return 0;
}
