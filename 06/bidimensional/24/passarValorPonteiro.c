#include <stdio.h>

void atualizarValor(int *array, int size){
    int *ptr = array;

    for(int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void imprimirArray(int *array, int size){
    int *ptr = array;
    for(int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
}

int main(){
    int array[5];

    atualizarValor(array, 5);
    imprimirArray(array, 5);

    return 0;
}