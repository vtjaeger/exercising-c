#include <stdio.h>
#include <stdlib.h>

int* elementos(int array[], int size){
    int* novoArray = (int *)malloc(2 * sizeof(int)); // Alocar memória para o novo array
    int maior, menor = array[0];

    for(int i = 1; i < size; i++) {
        if(array[i] > maior) {
            maior = array[i];
        }
        if(array[i] < menor) {
            menor = array[i];
        }
    }
    novoArray[0] = maior;
    novoArray[1] = menor;
    return novoArray;
}

int main() {
    int array[5];
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    int* resultado = elementos(array, size);
//    for(int i = 0; i < 2; i++) {
//        printf("%d ", resultado[i]);
//    }

    printf("maior: %d ", resultado[0]);
    printf("menor: %d", resultado[1]);

    free(resultado);

    return 0;
}
