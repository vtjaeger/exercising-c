#include <stdio.h>
#include <stdlib.h>

int* sort(int array[], int size) {
    int* novoArray = (int *)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) {
        novoArray[i] = array[i];
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - i; j++) {
            if(novoArray[j] > novoArray[j + 1]) {
                int temp = novoArray[j];
                novoArray[j] = novoArray[j + 1];
                novoArray[j + 1] = temp;
            }
        }
    }

    return novoArray;
}

int main(){
    int array[5];
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    int* novoArray = sort(array, size);
    for(int i = 0; i < size; i++) {
        printf("%d ", novoArray[i]);
    }
    free(novoArray);
    return 0;
}