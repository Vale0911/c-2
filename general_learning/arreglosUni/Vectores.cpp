// Crea un vector con los números del 1 al 10 y usa un ciclo for para imprimir todos los elementos del vector.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numeros(10);
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
        cout<<i<<endl;
        }
}


