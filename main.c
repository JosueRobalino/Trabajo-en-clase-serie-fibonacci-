#include <stdio.h>

void generarFibonacci(int n, int resultado[]) {
    resultado[0] = 0;
    resultado[1] = 1;
    for (int i = 2; i < n; ++i) {
        resultado[i] = resultado[i - 1] + resultado[i - 2];
    }
}

int main() {
    int n;
    printf("Ingrese la cantidad : ");
    scanf("%d", &n);

    int resultado[n];
    generarFibonacci(n, resultado);

    printf("La serie hasta el término %d:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
