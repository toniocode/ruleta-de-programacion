// Crear un programa que pida dos números y un operador 
// (+, -, *, /), y muestre el resultado de la operación.

#include <iostream>
using namespace std;

int main () {
    double a, b;
    char operador;

    cout << "Introduce un número: ";
    cin >> a;

    cout << "Introduce otro número: ";
    cin >> b;

    cout << "Introduce operador (+, -, *, /): ";
    cin >> operador;

    switch (operador) {
        case '+': cout << "Resultado: " << a+b << endl; break;

        case '-': cout << "Resultado: " << a-b << endl; break;

        case '*': cout << "Resultado: " << a*b << endl; break;

        case '/':
            if (b != 0) cout << "Resultado: " << a/b << endl;
            else cout << "Error: no es posible realizar la división por cero.";
            break;

        default: cout << "Operador no válido." << endl;
    }

    return 0;
}