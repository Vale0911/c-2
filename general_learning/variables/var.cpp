// Define una variable global int x = 10 y luego, dentro de una función, cambia el valor de x y muestra el valor dentro de la función y fuera de ella.
# include <iostream>
using namespace std;
int x = 10;
void cambiarValor() {
    x = 20;
    cout << "El valor de x dentro de la función es: " << x << endl;
    }
    int main() {
        cout << "El valor de x fuera de la función es: " << x << endl;
        cambiarValor();
        return 0;
        }
        