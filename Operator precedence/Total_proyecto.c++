// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include <iomanip>  

using namespace std;

int main()
{
    //Variables Cálculo Rubro Talento Humano
    int numInvestigadores;
    int numAsistentes;
    int numHorasSemInv;
    int numHorasSemAsis;
    float valorHorasInv;
    float valorHorasAsis;
    int numMeses;
    float totalInv = 0;
    float totalAsis = 0;
    float totalTalento = 0;
    
    //Variables Cálculo Rubro Equipos
    int numEquipos;
    float valorUnitEquipo;
    float totalEquipos = 0;
    
    float valorTotalProyecto=0;
    //Variables Calculo costos viaje
    int Numero_viajes;
    int cantidad_personas;
    int Costo_tiquete;
    float Costototal_tiquete = 0;
    int numero_de_dias;
    int Valor_alojamiento;
    float Valortotal_alojamiento =0;
    float Valor_total_viajes =0;
    
    cout<<fixed <<setprecision(2);
    cout<<"Bienvenido a Proyect-o-Matic V.0.86"<<endl;
    cout<<"1. Cálculo de rubro de talento humano"<<endl;
    cout<<"Ingrese el número de meses del proyecto: ";
        cin>>numMeses;
    cout<<"Ingrese el número de investigadores: ";
        cin>>numInvestigadores;
    cout<<"Ingrese el número de horas semanales de los investigadores: ";
       cin>>numHorasSemInv;
    cout<<"Ingrese el valor de las horas de los investigadores: ";
       cin>>valorHorasInv;
    totalInv = numMeses * 4 * numHorasSemInv * valorHorasInv * numInvestigadores;
    
    cout<<"Ingrese el número de asistentes: ";
       cin>>numAsistentes;
    cout<<"Ingrese el número de horas semanales de los asistentes: ";
       cin>>numHorasSemAsis;
    cout<<"Ingrese el valor de las horas de los asistentes: ";
       cin>>valorHorasAsis;
    totalAsis = numMeses * 4 * numHorasSemAsis * valorHorasAsis * numAsistentes;
    
    totalTalento = totalInv + totalAsis;
    cout<<"El valor del rubro de talento humano es: "<<totalTalento<<endl;
    
    
    cout<<"2. Cálculo de rubro de equipos"<<endl;
    
    cout<<"Ingrese el número de equipos: ";
       cin>>numEquipos;
    cout<<"Ingrese el valor unitario de los equipos: ";
       cin>>valorUnitEquipo;

    totalEquipos = numEquipos * valorUnitEquipo;
    cout<<"El valor del rubro de equipos es: "<<totalEquipos<<endl;
    
    
    valorTotalProyecto = totalTalento + totalEquipos;
    cout<<"El valor bruto del proyecto es: "<<valorTotalProyecto<<endl;

  cout<<"3. Calculo costos viajes"<<endl;

    cout<<"Ingrese el numero de viajes: "<<endl;
        cin>>Numero_viajes;
    cout<<"Ingrese numero de personas que viajan: "<<endl;
        cin>>cantidad_personas;
    cout<<"Ingrese el costo unitario de los tiquetes: "<<endl;
        cin>>Costo_tiquete;
        Costototal_tiquete = Costo_tiquete * cantidad_personas*Numero_viajes;
    
    cout<<"Ingrese el numero de dias del viaje: "<<endl;
        cin>>numero_de_dias;
    cout<<"Ingrese el valor por noche del alojamiento: "<<endl;
        cin>>Valor_alojamiento;
        Valortotal_alojamiento = numero_de_dias*cantidad_personas*Valor_alojamiento;

        Valor_total_viajes = Costototal_tiquete+Valortotal_alojamiento;
    cout<<"El valor total del viaje es: "<<Valor_total_viajes<<endl;
    
    
    float ganancia = 0.3;
    valorTotalProyecto = valorTotalProyecto*1.30;
    cout<<"El valor bruto del proyecto es: "<<valorTotalProyecto<<endl;
    valorTotalProyecto = totalTalento + totalEquipos + Valor_total_viajes;
    valorTotalProyecto = valorTotalProyecto/(1.0-ganancia);
    cout<<"El valor bruto del proyecto es: "<<valorTotalProyecto<<endl;

    
    
    return 0;
}
