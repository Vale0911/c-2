#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    
    cout << "Ingrese el valor de x: ";
    cin >> x;
    
    cout << "Ingrese el valor de y: ";
    cin >> y;

    double p_uno = sqrt(pow(x, y)) * (sqrt(pow(y, x) + 3) / 8);
    
    double p_dos = (32 * y - 5) / pow(x * y, 2);
    
    double p_tres = (12 * y - pow(x, 2 + y) * 2) / p_dos;
    
    double c = pow(p_tres, 3);
    
    double z = pow(p_uno, 3) / pow(c, 3);
    
    cout << "El valor de z es: " << z << endl;

    return 0;
}


