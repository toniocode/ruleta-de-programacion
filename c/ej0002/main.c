// Determina si un array está equilibrado. Un array está
// equilibrado si existe un índice i tal que la suma de
// todos los números a su izquierda sea igual a la suma
// de todos los números a su derecha.

#include <stdio.h>

void estaEquilibrado(int arr[], int tamanyo) {
    int sumaTotal = 0;
    for (int i = 0; i < tamanyo; i++) {
        sumaTotal += arr[i];
    }

    int sumaIzq = arr[0];

    int indice_equilibrado = -1;
    for (int i = 1; i < tamanyo; i++) {
        int sumaDer = sumaTotal - sumaIzq - arr[i];

        if (sumaIzq == sumaDer) {
            indice_equilibrado = i;
            break;
        }

        sumaIzq += arr[i];
    }

    if (indice_equilibrado != -1) {
        printf("✅ El array está equilibrado en el índice %d.\n", indice_equilibrado);
    } else {
        printf("❌ El array no está equilibrado.\n");
    }
}

int main () {
    int arr1[6] = {11, -2, 3, 3, 2, 3};
    int arr2[6] = {12, 3, 2, 5, 10};
    int arr3[3] = {1, 2, 2};

    estaEquilibrado(arr1, 6);
    estaEquilibrado(arr2, 6);
    estaEquilibrado(arr3, 3);

    return 0;
}

