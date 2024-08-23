#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    
    int opcion = 0;
    float largo, ancho;
    
    float areaHabitaciones = 0;
    float areaBanhos = 0;
    
    
    float areaPatio = 0;
    cout<<"¿La casa tiene patio? No=0, Sí=1 ";
    cin>>opcion;
    if(opcion == 1){
        cout<<"Ingrese el largo del patio: ";
        cin>>largo;
        if(largo < 2){
            largo = 2;
        }else if(largo > 8){
            largo = 8;
        }
        //largo = max(largo, 2);
        //largo = min(largo, 8);
        
        cout<<"Ingrese el ancho del patio: ";
        cin>>ancho;
        if(ancho < 2){
            ancho = 2;
        }else if(ancho > 8){
            ancho = 8;
        }
        areaPatio = largo*ancho;
    }
    
    
    
    float areaSocial = 20;
   
    cout<<"¿Qué tipo de area social desea? Regular=0, Premium=1 ";
    cin>>opcion;
    if(opcion == 1){
        areaSocial = 40;
    }
    
    float areaGaraje = 10;
   
    cout<<"¿Qué tipo de garaje social desea? Estándar=0, Doble=1 ";
    cin>>opcion;
    if(opcion == 1){
        areaGaraje = 20;
    }
    
    
    float areaTotal = (areaHabitaciones + areaBanhos + areaPatio + areaSocial)*1.25;
    cout<<"El area total de la casa, incluido el garaje, es "<<(areaTotal+areaGaraje);
    
    
    float valorTotal;
    if(areaTotal < 100){
        valorTotal = areaTotal * 8000000;
    }else{
        valorTotal = areaTotal * 9000000;
    }
    valorTotal = valorTotal + areaGaraje*5000000;
    
    if(valorTotal > 1000000000){
        valorTotal = valorTotal*(0.95);
    }
    
    cout<<"El valor total de la casa es "<<valorTotal<<endl;
    
    
    return 0;
}
