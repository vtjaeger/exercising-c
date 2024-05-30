#include <stdio.h>
#include <stdlib.h>

int* reverseArray(int array[], int size){
    int *novoArray = (int *) malloc(size * sizeof(int));
    int j = 0;
    for(int i = size - 1; i >= 0; i--) {
        novoArray[j] = array[i];
        j++;
    }
    return novoArray;
}

int main() {
    int size;
    printf("tamanho do array:");
    scanf("%d", &size);
    int array[size];

    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int *resultado = reverseArray(array, size);
    for(int i = 0; i < size; i++) {
        printf("%d ", resultado[i]);
    }
    free(resultado);

    return 0;
}
