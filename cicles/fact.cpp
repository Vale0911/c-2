#include<iostream>

using namespace std;

int main()
{
    
    unsigned long fact = 1;
    int n;
    int i=1;
    cout<<"Ingrese un número n: ";
    cin>>n;
    
    
    while(i<=n){
        fact *= i++;
        cout<<"El factorial de "<<(i-1)<<" es: "<<fact<<endl;
    }
    
    cout<<"El factorial de n es: "<<fact;
    
    
    return 0;
}
/*
Iteración 1: fact = 1 * 1 = 1, luego i se incrementa a 2.
Imprime: "El factorial de 1 es: 1".
Iteración 2: fact = 1 * 2 = 2, luego i se incrementa a 3.
Imprime: "El factorial de 2 es: 2".
Iteración 3: fact = 2 * 3 = 6, luego i se incrementa a 4.
Imprime: "El factorial de 3 es: 6".
Iteración 4: fact = 6 * 4 = 24, luego i se incrementa a 5.
Imprime: "El factorial de 4 es: 24".
Iteración 5: fact = 24 * 5 = 120, luego i se incrementa a 6.
Imprime: "El factorial de 5 es: 120".
*/