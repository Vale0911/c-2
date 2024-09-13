#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

// Función para generar un número aleatorio en un rango
int generar_numero_aleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Función para verificar si un número es primo
bool es_primo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Función para jugar una ronda
int jugar_ronda() {
    int total = 0;
    while (total < 23) {
        int dado1 = generar_numero_aleatorio(1, 6);
        int dado2 = generar_numero_aleatorio(1, 6);
        cout << "Lanzaste: " << dado1 << " y " << dado2 << endl;

        if (dado1 == dado2) {
            cout << "¡Sacaste dobles de " << dado1 << "!" << endl;
            for (int i = 0; i < 3; ++i) { // el código imprime un mensaje y luego simula el lanzamiento de tres dados adicionales
                int dado_extra = generar_numero_aleatorio(1, 6);
                cout << "Nuevo dado: " << dado_extra << endl;
                total += dado_extra;
            }
        } else if (dado1 + dado2 == 12) {
            cout << "¡Sacaste un 12! Puedes lanzar un solo dado." << endl;
            int dado_extra = generar_numero_aleatorio(1, 6);
            cout << "Dado extra: " << dado_extra << endl;
            total += dado_extra;
        } else {
            total += dado1 + dado2;
        }

        if (total >= 23) break;
        cout << "Total acumulado: " << total << endl;
    }

    return total;
}

// Función para determinar el ganador
int determinar_ganador(int puntaje1, int puntaje2) {
    bool primo1 = es_primo(puntaje1);
    bool primo2 = es_primo(puntaje2);

    if (primo1 && !primo2) return 1;
    if (!primo1 && primo2) return 2;
    if (primo1 && primo2) return (puntaje1 > puntaje2) ? 1 : 2;
    return (puntaje1 > puntaje2) ? 1 : 2;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    cout << "Turno del Jugador 1" << endl;
    int puntaje1 = jugar_ronda();
    cout << "Puntuación final del Jugador 1: " << puntaje1 << endl;

    cout << "Turno del Jugador 2" << endl;
    int puntaje2 = jugar_ronda();
    cout << "Puntuación final del Jugador 2: " << puntaje2 << endl;

    int ganador = determinar_ganador(puntaje1, puntaje2);
    cout << "El ganador es el Jugador " << ganador << endl;

    return 0;
}
