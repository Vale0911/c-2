#include <iostream>
using namespace std;

int main() {

    int cantidad_investigadores;
    int cantidad_asistentes;
    int horas_semanales;
    int meses;
    int inves_cobrohora;
    int asis_cobrohora;
    int subtotal_investigadores = cantidad_investigadores*horas_semanales*inves_cobrohora+0.3;
    int subtotal_asistentes = cantidad_asistentes*horas_semanales*asis_cobrohora+0.3;
    int total_presupuesto = subtotal_investigadores+subtotal_asistentes+0.19;
    cout <<"Presupuesto del proyecto"<<endl;
    cout <<"Cuantos investigadores?:"<<endl;
        cin >> cantidad_investigadores;
    cout <<"Cuantos asistentes?: "<<endl;
        cin >> cantidad_asistentes;
    cout <<"Cuantas horas semanales de trabajo?:"<<endl;
        cin >> horas_semanales;
    cout <<"Cuantos meses se estima que durara el proyecto?:"<<endl;
        cin >> meses;
    cout <<"Cuanto cobre por hora de investigador?:"<<endl;
        cin >> inves_cobrohora;
    cout <<"Cuanto cobre por hora de asistente?:"<<endl;
        cin >> asis_cobrohora;
    cout <<"Presupuesto total: $"<<total_presupuesto<<endl;
    return 0;
}
