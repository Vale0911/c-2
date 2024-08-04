#include <iostream>
using namespace std;

int main() {
    // Definición de variables
    const int NUM_ESTUDIANTES = 5;
    float calificaciones[NUM_ESTUDIANTES];
    float suma_total = 0.0;
    float promedio_general;

    // Solicitar calificaciones para cada estudiante
    for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
        cout << "Ingrese la calificación del estudiante " << (i + 1) << ": ";
        cin >> calificaciones[i];
        suma_total += calificaciones[i];
    }

    // Calcular el promedio general
    promedio_general = suma_total / NUM_ESTUDIANTES;

    // Mostrar el promedio general
    cout << "El promedio general de la clase es: " << promedio_general << endl;

    return 0;
}
