#include <iostream>
using namespace std;
int main ()
{
    
    int contrasenha =  1234;
    int intento;
    int intentos = 0;
    
    cout<<"Ingrese su contraseña: ";
    cin>>intento;
    while(intento != contrasenha && intentos < 2){
        cout<<"Clave incorrecta. Tiene "<<2-intentos<<" intentos más"<<endl;
        intentos++;
        
        cout<<"Ingrese su contraseña: ";
        cin>>intento;
    }
    
    if(intento != contrasenha){
        cout<<"Cuenta bloqueada!!"<<endl;
    }else{
        cout<<"Bienvenido a su cuenta!!"<<endl;
    }
    return 0;
}