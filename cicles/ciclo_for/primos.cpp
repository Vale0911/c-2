#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    int i;
    cout<<"Escriba el máximo número a evaluar: ";
    cin>>n;
    if(n>=2){
        cout<<"2 es primo!"<<endl;
    }
    for(int j = 3; j<=n; j+=2){
        i = 2;
        while(i < sqrt(j) && j%i != 0){
            i++;
        }
        if(i<=sqrt(j)){
        //if(j%i == 0){
            //cout<<j<<" no es primo!"<<endl;
        }else{
            cout<<j<<" es primo!"<<endl;
        }
        
    }
    
    return 0;
}