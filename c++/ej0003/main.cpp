// Pedir un número entero por teclado y determinar si es
// capicúa

#include <iostream>
using namespace std;

int main() {
    int numero=0, original=0, invertido=0;

    cout << "Número: ";
    cin >> numero;
    
    original = numero;

    while (numero != 0) {
        int digito = numero % 10; 
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    if (original == invertido) {
        cout << "El número es capicúa.\n";
    } else {
        cout << "El número no es capicúa\n";
    }

    return 0;
}