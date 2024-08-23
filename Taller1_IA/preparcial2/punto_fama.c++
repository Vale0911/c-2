#include <iostream>
using namespace std;

int main() {
    int secreto;
    cout << "Jugador A, ingrese el número secreto de dos dígitos: ";
    cin >> secreto;

    if (secreto < 10 || secreto > 99) {
        cout << "Número inválido. Gracias por participar." << endl;
    } else {
        int intento;
        int digito_secreto1 = secreto / 10;
        int digito_secreto2 = secreto % 10;

        cout << "Jugador B, ingrese su primer intento: ";
        cin >> intento;
        int digito_intento1 = intento / 10;
        int digito_intento2 = intento % 10;

        if (intento == secreto) {
            cout << "¡Usted ha encontrado el número!" << endl;
        } else if ((digito_intento1 == digito_secreto2 && digito_intento2 == digito_secreto1)) {
            cout << "Usted tiene 2 puntos" << endl;
        } else if (digito_intento1 == digito_secreto1 || digito_intento2 == digito_secreto2) {
            cout << "Usted tiene 1 fama" << endl;
        } else if (digito_intento1 == digito_secreto2 || digito_intento2 == digito_secreto1) {
            cout << "Usted tiene 1 punto" << endl;
        }

        cout << "Jugador B, ingrese su segundo intento: ";
        cin >> intento;
        digito_intento1 = intento / 10;
        digito_intento2 = intento % 10;

        if (intento == secreto) {
            cout << "¡Usted ha encontrado el número!" << endl;
        } else if ((digito_intento1 == digito_secreto2 && digito_intento2 == digito_secreto1)) {
            cout << "Usted tiene 2 puntos" << endl;
        } else if (digito_intento1 == digito_secreto1 || digito_intento2 == digito_secreto2) {
            cout << "Usted tiene 1 fama" << endl;
        } else if (digito_intento1 == digito_secreto2 || digito_intento2 == digito_secreto1) {
            cout << "Usted tiene 1 punto" << endl;
        }

        cout << "Jugador B, ingrese su tercer intento: ";
        cin >> intento;
        digito_intento1 = intento / 10;
        digito_intento2 = intento % 10;

        if (intento == secreto) {
            cout << "¡Usted ha encontrado el número!" << endl;
        } else if ((digito_intento1 == digito_secreto2 && digito_intento2 == digito_secreto1)) {
            cout << "Usted tiene 2 puntos" << endl;
        } else if (digito_intento1 == digito_secreto1 || digito_intento2 == digito_secreto2) {
            cout << "Usted tiene 1 fama" << endl;
        } else if (digito_intento1 == digito_secreto2 || digito_intento2 == digito_secreto1) {
            cout << "Usted tiene 1 punto" << endl;
        }

        cout << "Jugador B, ingrese su cuarto intento: ";
        cin >> intento;
        digito_intento1 = intento / 10;
        digito_intento2 = intento % 10;

        if (intento == secreto) {
            cout << "¡Usted ha encontrado el número!" << endl;
        } else if ((digito_intento1 == digito_secreto2 && digito_intento2 == digito_secreto1)) {
            cout << "Usted tiene 2 puntos" << endl;
        } else if (digito_intento1 == digito_secreto1 || digito_intento2 == digito_secreto2) {
            cout << "Usted tiene 1 fama" << endl;
        } else if (digito_intento1 == digito_secreto2 || digito_intento2 == digito_secreto1) {
            cout << "Usted tiene 1 punto" << endl;
        }

        cout << "Jugador B, ingrese su quinto intento: ";
        cin >> intento;
        digito_intento1 = intento / 10;
        digito_intento2 = intento % 10;

        if (intento == secreto) {
            cout << "¡Usted ha encontrado el número!" << endl;
        } else {
            cout << "Jugador B ha perdido. El número era: " << secreto << endl;
        }
    }

    return 0;
}
