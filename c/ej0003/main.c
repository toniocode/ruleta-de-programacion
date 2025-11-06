// Mostrar la tabla de multiplicar de un número

#include <stdio.h>

int main() {
    int n;

    printf("Número: ");
    scanf("%d", &n);

    printf("Tabla de multiplicar del %d\n\n", n);

    for (int i = 1; i <= 10; i++) {
        printf("%2d x %2d = %2d\n", n, i, (n * i));
    }

    return 0;
}