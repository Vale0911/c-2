#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    float x, y;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    float parte1 = sqrt((2 * x + pow(y, 2)) / (3 + x));
    float parte2 = (pow(x, 2) / (pow(y, 3) + x)) - 5 * sqrt(3 * x);
    float z = parte1 - parte2;
    cout << "El valor de z es: " << z << endl;

    return 0;
}
