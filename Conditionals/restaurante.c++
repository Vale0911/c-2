#include <iostream>
using namespace std;

int main() {
    int total = 15000 + 0.19; 
    int precio_carne = 3000; 
    int precio_queso = 2500;
    int precio_tocineta = 2000;
    int precio_pepinillos = 1500;
    int precio_verduras = 1000;
    int precio_hamburguesa = 500;
    int carne;
    int queso;
    int tocineta;
    int pepinillos;
    int verduras;

    cout <<"Arma tu hamburguesa con las siguientes opciones:" << endl;
    
    cout << "Desea carne? (1) Si (2) No: "<<endl;
    cin >> carne;
    if(carne == 1);{
        cout << "Cuánto carne desea?: "<<endl;
        cin >> carne;
        total -= carne * precio_carne*carne;
    }
    cin >> queso;
    if(queso == 1);{
            cout << "Cuánto queso desea?: "<<endl;
            cin >> queso;
            total -= queso * precio_queso*queso;
    }

    cout << "Desea tocineta? (1) Si (2) No: "<<endl;
    cin >> tocineta;
    if(tocineta == 1);{
    cout << "Cuánta tocineta desea?: "<<endl;
    cin >> tocineta;
    total -= tocineta * precio_tocineta*tocineta;
    }

    cout << "Desea pepinillos? (1) Si (2) No: "<<endl;
    cin >> pepinillos;
    if(pepinillos == 1);{
    cout << "Cuántos pepinillos desea?: "<<endl;
    cin >> pepinillos;
    total -= pepinillos * precio_pepinillos*pepinillos;
    }

    cout << "Desea verduras? (1) Si (2) No: "<<endl;
    cin >> verduras;
    if(verduras == 1);{
    cout << "Cuántas verduras desea?: "<<endl;
    cin >> verduras;
    total -= verduras * precio_verduras*verduras;
    }

    cout << "Tu total a pagar es: $" << total << endl;

    return 0;
}
