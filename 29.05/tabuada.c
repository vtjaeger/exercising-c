#include <stdio.h>
#include <stdlib.h>

int* calculaTabuada(int numero) {
    int* resultado = (int*) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        resultado[i] = numero * (i + 1);
    }
    return resultado;
}

int main() {
    printf("numero:");
    int x;
    scanf("%d", &x);
    int* resultado = calculaTabuada(x);

    for (int i = 0; i < 10; i++) {
        printf("%d ", resultado[i]);
    }
    free(resultado);
    return 0;
}
