#include<iostream>

using namespace std;

void generarLinea(int linea[], int maxExistencias, int numModelos){
    int numMod = 3+rand()%8;
    for(int i=0; i<numModelos; i++){
        if(i >= numMod){
            linea[i] = -1;
        }else{
            linea[i] = 1+rand()%maxExistencias;
        }
    }
}

void generarLineas(int linea0[], int linea1[], int linea2[], int maxExistencias, int numModelos){
    generarLinea(linea0,maxExistencias,numModelos);
    generarLinea(linea1,maxExistencias,numModelos);
    generarLinea(linea2,maxExistencias,numModelos);
}

void generarPedidos(int codigosPedido[], int cantidadesPedido[], int numPedidos, int maxNumCantidades){
    for(int i=0; i<numPedidos; i++){
        cout<<"Ingrese el número del modelo: ";
        cin>>codigosPedido[i];
        do{
            cout<<"Ingrese la cantidad del modelo: ";
            cin>>cantidadesPedido[i];
        }while(cantidadesPedido[i] > maxNumCantidades || cantidadesPedido[i] < 0);
    }
}


bool validarPedidoInd(int linea0[], int linea1[], int linea2[], int codigo, int cant){
    int linea = codigo/100;
    int modelo = codigo%100;
    //cout<<"validadndo "<<linea<<" "<<modelo;
    if(linea > 2){
        cout<<"Error - Línea no existe!"<<endl;
        return false;
    }else{
        if(linea == 0){
            if(linea0[modelo] != -1){
                if(linea0[modelo] >= cant){
                    return true;
                }
            }else{
                return false;
            }
        }else if(linea == 1){
            if(linea1[modelo] != -1){
                if(linea1[modelo] >= cant){
                    return true;
                }
            }else{
                return false;
            }
        }else{
            if(linea2[modelo] != -1){
                if(linea2[modelo] >= cant){
                    return true;
                }
            }else{
                return false;
            }
        } 
    }
    return false;
}

void comprarPedidoInd(int linea0[], int linea1[], int linea2[], int codigo, int cant){
    int linea = codigo/100;
    int modelo = codigo%100;
    
    if(linea == 0){
        linea0[modelo] -= cant;
    }else if(linea == 1){
        linea1[modelo] -= cant;
    }else{
        linea2[modelo] -= cant;
    } 
    
}

bool evaluarPedido(int linea0[], int linea1[], int linea2[], int codigos[], int cantidades[], int numPedidos){
    bool viable = true;
    
    for(int i=0; i<numPedidos; i++){
        viable = viable && validarPedidoInd(linea0, linea1, linea2, codigos[i], cantidades[i]);
    }
    
    return viable;
}

void comprarPedido(int linea0[], int linea1[], int linea2[], int codigos[], int cantidades[], int numPedidos){
    for(int i=0; i<numPedidos; i++){
        comprarPedidoInd(linea0, linea1, linea2, codigos[i], cantidades[i]);
    }
}

void mostrarInventarioInd(int numlinea, int linea[], int maxNumModelos){
    int i=0;
    while(i < maxNumModelos && linea[i] != -1){
        cout<<"("<<100*numlinea+i<<","<<linea[i]<<") ";
        i++;
    }
    cout<<endl;
}

void mostrarInventario(int linea0[], int linea1[], int linea2[], int maxNumModelos){
    mostrarInventarioInd(0, linea0, maxNumModelos);
    mostrarInventarioInd(1, linea1, maxNumModelos);
    mostrarInventarioInd(2, linea2, maxNumModelos);
}

int main()
{
    srand(1234);
    int maxNumModelos = 10;
    int maxNumExistencias = 20;
    int linea0[maxNumModelos];
    int linea1[maxNumModelos];
    int linea2[maxNumModelos];
    
    int maxNumPedidos =  10;
    int maxNumCantidades = 5;
    int numPedidos = 0;
    int codigosPedido[maxNumPedidos];
    int cantidadesPedido[maxNumPedidos];
    
    generarLineas(linea0,linea1,linea2,maxNumExistencias,maxNumModelos);
    
    mostrarInventario(linea0,linea1,linea2,maxNumModelos);
    
    cout<<"Escriba el número de modelos que quiere pedir: ";
    cin>>numPedidos;
    generarPedidos(codigosPedido, cantidadesPedido, numPedidos, maxNumCantidades);
    
    if(evaluarPedido(linea0,linea1,linea2,codigosPedido, cantidadesPedido, numPedidos)){
        comprarPedido(linea0,linea1,linea2,codigosPedido, cantidadesPedido, numPedidos);
        cout<<"Sí se pudo comprar el pedido!"<<endl;
    }else{
        cout<<"No se pudo comprar el pedido!"<<endl;
    }
    
    mostrarInventario(linea0,linea1,linea2,maxNumModelos);
    
    
    return 0;
}
