#include <iostream>

using namespace std;

int main() {
    int semilla = 12780;
    srand(semilla);
    int min = 1;
    int max = 6;

    int tiro_inicial = rand() % max + min;
    cout << "Tiro inicial: " << tiro_inicial << endl;

    if (tiro_inicial == 7 || tiro_inicial == 11) {
        cout << "Ganaste!" << endl;
    } else if (tiro_inicial == 2 || tiro_inicial == 3 || tiro_inicial == 12) {
        cout << "Perdiste!" << endl;
    } else {
        int puntos_sumados = tiro_inicial;
        int tiro_secundario = rand() % max + min;
        cout << "Tiro siguiente: " << tiro_secundario << endl;

        if (tiro_secundario == puntos_sumados) {
            cout << "Ganaste!" << endl;
        } else if (tiro_secundario == 7) {
            cout << "Perdiste!" << endl;
        } else {
            cout << "no ganaste ni perdiste, sigue jugando!" << endl;
        }
    }
    return 0;
}