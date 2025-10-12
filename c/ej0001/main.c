// Mostrar una pirámide de una altura pedida por teclado.

#include <stdio.h>

int main () {
    int altura = 0;

    printf("Introduce altura: ");
    scanf("%d", &altura);

    printf("Pirámide de altura %d:\n\n", altura);
    for (int fila = 1; fila <= altura; fila++) {
        int espacios = altura - fila;
        int asteriscos = (fila*2) - 1;

        for (int e = 1; e <= espacios; e++) {
            printf(" ");
        }

        for (int a = 1; a <= asteriscos; a++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}