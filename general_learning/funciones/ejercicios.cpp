#include <iostream>
#include <functional>

using namespace std;

int aplicar_operacion(function<int(int, int)> func, int a, int b) {
    return func(a, b);
}

int sumar(int x, int y) {
    return x + y;
}

int main() {
    int resultado = aplicar_operacion(sumar, 5, 3);
    cout << "El resultado de la suma es: " << resultado <<endl;

    return 0;
}
