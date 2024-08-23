#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Piensa en un número entre 0 y 10 y el juego intentará adivinarlo." << endl;

    string respuesta;

    // Primera adivinanza
    cout << "¿Es tu número 5? (s/n): ";
    cin >> respuesta;
    if (respuesta == "s" || respuesta == "S") {
        cout << "¡He adivinado tu número! Es 5." << endl;
    } else {
        cout << "¿Tu número es mayor que 5? (s/n): ";
        cin >> respuesta;
        if (respuesta == "s" || respuesta == "S") {
            // Segunda adivinanza para números mayores que 5
            cout << "¿Es tu número 8? (s/n): ";
            cin >> respuesta;
            if (respuesta == "s" || respuesta == "S") {
                cout << "¡He adivinado tu número! Es 8." << endl;
            } else {
                cout << "¿Tu número es mayor que 8? (s/n): ";
                cin >> respuesta;
                if (respuesta == "s" || respuesta == "S") {
                    cout << "¿Es tu número 9? (s/n): ";
                    cin >> respuesta;
                    if (respuesta == "s" || respuesta == "S") {
                        cout << "¡He adivinado tu número! Es 9." << endl;
                    } else {
                        cout << "¡He adivinado tu número! Es 10." << endl;
                    }
                } else {
                    cout << "¿Es tu número 6? (s/n): ";
                    cin >> respuesta;
                    if (respuesta == "s" ||  respuesta == "S") {
                        cout << "¡He adivinado tu número! Es 6." << endl;
                    } else {
                        cout << "¡He adivinado tu número! Es 7." << endl;
                    }
                }
            }
        } else {
            // Segunda adivinanza para números menores o iguales a 5
            cout << "¿Es tu número 2? (s/n): ";
            cin >> respuesta;
            if (respuesta == "s" || respuesta == "S") {
                cout << "¡He adivinado tu número! Es 2." << endl;
            } else {
                cout << "¿Tu número es mayor que 2? (s/n): ";
                cin >> respuesta;
                if (respuesta == "s" || respuesta == "S") {
                    cout << "¿Es tu número 4? (s/n): ";
                    cin >> respuesta;
                    if (respuesta == "s" || respuesta == "S") {
                        cout << "¡He adivinado tu número! Es 4." << endl;
                    } else {
                        cout << "¡He adivinado tu número! Es 3." << endl;
                    }
                } else {
                    cout << "¿Es tu número 0? (s/n): ";
                    cin >> respuesta;
                    if (respuesta == "s" || respuesta == "S") {
                        cout << "¡He adivinado tu número! Es 0." << endl;
                    } else {
                        cout << "¡He adivinado tu número! Es 1." << endl;
                    }
                }
            }
        }
    }

    return 0;
}
