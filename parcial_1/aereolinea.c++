#include <iostream>

using namespace std;

int main() {
    cout << "Bienvenidos a Aerolíneas Nueva Scadta" << endl;
    
    int distancia_v;
    cout << "Ingrese la distancia de su vuelo en km: ";
    cin >> distancia_v;

    double valor_pasaje = 10000 * distancia_v;
    int puntos_acumulados = distancia_v;

    valor_pasaje = valor_pasaje * 1.25;

    int estatus;
    cout << "Ingrese su estatus: 0: no tiene, 1: Bronce, 2: Plata, 3: Oro: ";
    cin >> estatus;

    if (estatus == 1) {  
        valor_pasaje = 9000 * distancia_v * 1.25;
        puntos_acumulados = distancia_v;
    } else if (estatus == 2) {  
        valor_pasaje = 7500 * distancia_v * 1.25;
        puntos_acumulados = distancia_v * 2;
    } else if (estatus == 3) {  
        valor_pasaje = 6000 * distancia_v * 1.25;
        puntos_acumulados = distancia_v * 4;
    }

    if (estatus != 0) {
        int puntos;
        cout << "Ingrese cuántos puntos tiene: ";
        cin >> puntos;

        int desea_pagar_con_puntos;
        cout << "Desea pagar con puntos: 0: No, 1: Sí: ";
        cin >> desea_pagar_con_puntos;
        
        if (desea_pagar_con_puntos == 1) {
            double valor_en_pesos_de_puntos = puntos * 2000;
            if (valor_en_pesos_de_puntos >= valor_pasaje) {
                int puntos_restantes = (valor_en_pesos_de_puntos - valor_pasaje) / 2000;
                valor_pasaje = 0;
                puntos_acumulados = puntos_restantes;
                cout << "Ha pagado con sus puntos. Le quedan " << puntos_acumulados << " puntos." << endl;
            } else {
                double saldo_pendiente = valor_pasaje - valor_en_pesos_de_puntos;
                puntos_acumulados = 0;
                cout << "El valor final de su tiquete es: " << saldo_pendiente << " y no le quedan puntos disponibles." << endl;
            }
        } else {
            puntos_acumulados += puntos;
            cout << "El valor final de su tiquete es: " << valor_pasaje << " y tiene " << puntos_acumulados << " puntos disponibles." << endl;
        }
    } else {
        cout << "El valor de su tiquete es: " << valor_pasaje << endl;
    }

    return 0;
}
