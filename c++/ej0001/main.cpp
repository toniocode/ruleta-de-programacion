// Pedir al usuario una palabra y determinar 
// si es un palíndromo (se lee igual del
// derecho y del revés)

#include <iostream>

using namespace std;

int main () {
    string palabra;
    bool esPalindromo = true;
    
    cout << "Introduce una palabra: ";
    cin >> palabra;
    
    int inicio = 0, fin = palabra.length() - 1;
    
    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
            esPalindromo = false;
            break;
        }
        inicio++;
        fin--;
    }

    if (esPalindromo) {
        cout << "✅ Es un palíndromo" << endl;
    } else {
        cout << "❌ No es un palíndromo" << endl;
    }

    return 0;
}