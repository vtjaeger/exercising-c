#include <stdio.h>
#include <stdlib.h>

int* novoArray(int array[], int tamanho){
    // aloca espaco na memoria para um array do mesmo tamanho do passado no args
    // malloc retorna void, por isso conversao implicita para int
    int *resultado = (int *) malloc(tamanho * sizeof(int));

    if(resultado == NULL) {
        fprintf_s(stderr, "erro");
        return NULL;
    }

    for(int i = 0; i < tamanho; i++) {
        if(array[i] > 0) {
            resultado[i] = 1;
        } else {
            resultado[i] = 0;
        }
    }
    return resultado;
}

int main() {
    int array[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    int tamanho = sizeof(array) / sizeof(array[0]);
    int* resultado = novoArray(array, tamanho);

    for(int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    // libera memoria alocada pela funcao novoArray
    free(resultado);

    return 0;
}
