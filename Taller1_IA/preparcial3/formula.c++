#include<iostream>
#include<math.h>

using namespace std;

int main()
{

    float parte_uno, parte_dos, parte_tres,x,y, z;
    cout << "Ingrese el valor de x:"<< endl;
    cin >> x;
    cout << "Ingrese el valor de y:"<< endl;
    cin >> y;
    parte_uno = pow(sqrt(5*x + (sqrt(pow(y,x-1))/(y+2*x))),3);
    parte_dos = pow(pow(x,2),3)/(pow(y,3)*x+1);
    parte_tres = 3*(sqrt(3+sqrt(x-1)));
    z = parte_uno - (parte_dos - parte_tres);
    cout <<"El valor de z es:"<<z<<endl;
return 0;
}