#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    float base_tasa;
    if (edad < 20) {
        base_tasa = 20.0;
    } else {
        base_tasa = 18.0;
    }

    int comida_preferida;
    cout << "Seleccione su comida preferida: Hamburguesa = 2 / Perro = 3 / Pizza = 4 / Sushi = 5: ";
    cin >> comida_preferida;

    if (comida_preferida == 2) {
        base_tasa -= 0.2;
    } else if (comida_preferida == 3) {
        base_tasa -= 0.5;
    } else if (comida_preferida == 4) {
        base_tasa += 0.1;
    } else if (comida_preferida == 5) {
        base_tasa += 0.3;
    }

    int promedio;
    cout << "¿Está estudiando? Sí = 1 / No = 0: ";
    cin >> promedio;

    if (promedio == 1) {
        float promedio_si;
        cout << "Ingrese su promedio: ";
        cin >> promedio_si;

        if (promedio_si < 3.5) {
            base_tasa -= 0.5;
        } else if (promedio_si >= 3.5 && promedio_si <= 4.2) {
            base_tasa -= 0.8;
        } else if (promedio_si > 4.2) {
            base_tasa -= 1.5;
        }
    }

    if (base_tasa < 0) {
        base_tasa = 0;
    }

    float tasa_final = base_tasa;
    cout << "Tasa final de interés: " << tasa_final << endl;

    int labora;
    cout << "¿Trabaja? Sí = 1 / No = 0: ";
    cin >> labora;

    if (labora == 1 && tasa_final < 17.0) {
        tasa_final -= 1.0;
    }

    if (tasa_final < 0) {
        tasa_final = 0;
    }

    cout << "Su tasa final de interés: " << tasa_final << endl;

    return 0;
}
