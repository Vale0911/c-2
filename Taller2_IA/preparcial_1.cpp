#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void generar_partidos(int equipo_local[], int equipo_visita[], int goles_local[], int goles_visita[], int num_equipos) {
    int partido = 0;
    for (int i = 0; i < num_equipos; i++) {
        for (int j = 0; j < num_equipos; j++) {
            if (i != j) { // Los equipos no pueden jugar contra sí mismos
                equipo_local[partido] = i;
                equipo_visita[partido] = j;
                goles_local[partido] = rand() % 6; // Goles aleatorios entre 0 y 5
                goles_visita[partido] = rand() % 6;
                partido++;
            }
        }
    }
}

// Función para calcular puntos
void calcular_puntos(int equipo_local[], int equipo_visita[], int goles_local[], int goles_visita[], int total_puntos[], int num_partidos) {
    for (int partido = 0; partido < num_partidos; partido++) {
        if (goles_local[partido] > goles_visita[partido]) {
            total_puntos[equipo_local[partido]] += 3; // Gana el equipo local
        } else if (goles_local[partido] < goles_visita[partido]) {
            total_puntos[equipo_visita[partido]] += 3; // Gana el equipo visitante
        } else {
            total_puntos[equipo_local[partido]] += 1; // Empate
            total_puntos[equipo_visita[partido]] += 1;
        }
    }
}

// Función para encontrar el campeón
int calcular_campeon(int total_puntos[], int num_equipos) {
    int max_puntos = total_puntos[0];
    int campeon = 0;
    for (int i = 1; i < num_equipos; i++) {
        if (total_puntos[i] > max_puntos) {
            max_puntos = total_puntos[i];
            campeon = i;
        }
    }
    return campeon;
}

// Función para imprimir los puntos totales
void print_puntos_totales(string equipos[], int total_puntos[], int num_equipos) {
    cout << "Puntos Totales:" << endl;
    for (int i = 0; i < num_equipos; i++) {
        cout << equipos[i] << ": " << total_puntos[i] << " puntos" << endl;
    }
}

int main() {
    srand(1234); // Fijar semilla para la generación aleatoria

    // Lista de equipos
    string equipos[] = {"Junior", "Millonarios", "Santafé", "Nacional", "Medellín", "Bucaramanga", "Pasto", "Alianza", "Huila", "Tolima"};
    int num_equipos = 10;

    // Calcular el número de partidos
    int num_partidos = num_equipos * (num_equipos - 1);

    // Inicializar los vectores
    int equipo_local[num_partidos];
    int equipo_visita[num_partidos];
    int goles_local[num_partidos];
    int goles_visita[num_partidos];
    int total_puntos[num_equipos];

    // Generar los partidos
    generar_partidos(equipo_local, equipo_visita, goles_local, goles_visita, num_equipos);

    // Calcular los puntos
    calcular_puntos(equipo_local, equipo_visita, goles_local, goles_visita, total_puntos, num_partidos);

    // Encontrar al campeón
    int campeon = calcular_campeon(total_puntos, num_equipos);

    // Mostrar los resultados
    print_puntos_totales(equipos, total_puntos, num_equipos);
    cout << "El ganador del campeonato es " << equipos[campeon] << " con " << total_puntos[campeon] << " puntos." << endl;

    return 0;
}
