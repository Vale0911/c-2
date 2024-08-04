#include <iostream>
using namespace std;

int main() {
    //definición de variables
    int total = 15000 + 0.19; // int es el tipo de dato más común para enteros
    int precio_carne = 3000; // int en comparacion con python es el más común para float
    int precio_queso = 2500;
    int precio_tocineta = 2000;
    int precio_pepinillos = 1500;
    int precio_verduras = 1000;
    int precio_hamburguesa = 500;
    int carne, queso, tocineta, pepinillos, verduras;
    cout << "Elige tu hamburguesa:"<<endl;
    cout << "Cuanta carne?:" << endl; //cout -> muestra un mensaje al usuario
        cin >> carne; //cin -> pide al usuario que ingrese un número
        total = total + (precio_carne * carne);
    cout << "Cuanta queso?:" << endl;
        cin >> queso;
        total = total + (precio_queso * queso);
    cout << "Cuanta tocineta?:" << endl;
        cin >> tocineta;
        total = total + (precio_tocineta * tocineta);
    cout << "Cuantas pepinillos?:" << endl;
        cin >> pepinillos;
        total = total + (precio_pepinillos * pepinillos);
    cout << "Cuantas verduras?:" << endl;
        cin >> verduras;
        total = total + (precio_verduras * verduras);

    //comprobación de total de la compra
    cout << "Tu total a pagar es: $" << total << endl;
    return 0;

}