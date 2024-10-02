#include<iostream>

using namespace std;

int numpasajeros(int min = 50, int max = 100){
    return rand() %( max - min )+ min;
}

int distanciavuelos(int min = 500, int max = 5000){
    return rand() %( max - min )+ min;
}

void idpasajeros(int numpasajeros, int codigos[]){
    for (int i = 0; i < numpasajeros; i++){
        codigos[i] = rand() % 899 + 100;
    }
}

void millas(int distanciavuelos, int numpasajeros, int idpasajeros [], int bonusmillas []){
    int nummillas = 0;
    for (int i = 0; i < numpasajeros; i++){
        if (idpasajeros[i] % 12 == 0 ){
            bonusmillas[i] = distanciavuelos / 20;
        }
        else if (idpasajeros[i] % 7 == 0 ){
            bonusmillas[i] = distanciavuelos / 60;
        }
        else {
            bonusmillas[i] = distanciavuelos / 100;
        }
    }
}

void print(int numvuelos, int numpasajeros, int distanciavuelos, int idpasajeros[], int millas [] ){
    cout<<"La cantidad de vuelos son: "<<numvuelos<<endl;
    
    for( int i = 0; i < numvuelos; i++){
        cout<<"Vuelo # "<< i + 1<<endl;
        cout<<"Cantidad pasajeros: "<<numpasajeros<<endl;
        cout<<"La distancia recorrida es: "<<distanciavuelos<<endl;
        for ( int j = 0; j < numpasajeros; j++){
            cout<<"el pasajero con id "<<idpasajeros[j]<<" tiene "<<millas[j]<<" millas"<<endl;
        }
    }
}
int main()
{
    int semilla = 200;
    int max = 7;
    srand(time(NULL));
    int numvuelos  = rand() % max + 1;
    int x = numpasajeros();
    int y = distanciavuelos();
    int mi_llas[5000];
    int codigos[100];

    
    idpasajeros( x, codigos);
    millas(y, x, codigos, mi_llas);

    
    print(numvuelos, x , y, codigos, mi_llas);
    return 0;
}