#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Indice de masa corporal en adultos" << endl;

    // Declaración de variables
    double peso, estatura, IMC;

    // Solicitar al usuario el peso y la estatura
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;

    // Calcular el índice de masa corporal (IMC)
    IMC = peso / (pow(estatura, 2));
    double total = IMC;

    // Mostrar el IMC
    cout << "Su IMC es: " << total << endl;

    // Determinar la categoría de IMC y proporcionar recomendaciones
    if (IMC < 18.5) {
        cout << "Bajo peso" << endl;
        cout << "Su recomendación es: Comer más y beber menos alimentos" << endl;
    } else if (18.5 <= IMC && IMC < 25) {
        cout << "Peso normal" << endl;
        cout << "Su recomendación es: Comer lo que se comija y seguir ejercitándose" << endl;
    } else if (25 <= IMC && IMC < 30) {
        cout << "Sobrepeso" << endl;
        cout << "Su recomendación es: Sea consciente de que tiene sobrepeso y comience a comer menos" << endl;
    } else if (30 <= IMC && IMC < 35) {
        cout << "Obesidad grado I" << endl;
        cout << "Su recomendación es: Sea consciente de que tiene obesidad grado I y comience a comer menos" << endl;
    } else if (35 <= IMC && IMC < 40) {
        cout << "Obesidad grado II" << endl;
        cout << "Su recomendación es: Sea consciente de que tiene obesidad grado II y comience a comer menos" << endl;
    } else {
        cout << "Obesidad grado III" << endl;
        cout << "Su recomendación es: Sea consciente de que tiene obesidad grado III y comience a comer menos" << endl;
    }

    return 0;
}
