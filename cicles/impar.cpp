#include<iostream>

using namespace std;

int main()
{

    int n = 5;
    int i = 0;
    
    while(i < n){
        cout<<"Hola mundo!"<<endl;
        i+=1;
    }
    
    cout<<"Ingrese un número impar: ";
    cin>>n;
    while(n%2 == 0){
        cout<<"El número no fue impar"<<endl;
        cout<<"Ingrese un número impar: ";
        cin>>n;
    }
    return 0;
}