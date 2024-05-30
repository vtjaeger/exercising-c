#include <stdio.h>
#include <stdlib.h>

int* retornaArray(int array[], int size) {
    int *resultado = (int *) malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) {
        resultado[i] = array[i];
    }
    return resultado;
}

int main() {
    int array[5];
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int* resultado = retornaArray(array, size);
    for(int i = 0; i < size; i++) {
        printf("%d ", resultado[i]);
    }

    free(resultado);
    return 0;
}
