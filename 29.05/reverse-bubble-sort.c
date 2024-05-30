#include <stdio.h>
#include <stdlib.h>

int* reverseSort(int array[], int size){
    int* newArray = (int *) malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (newArray[j] < newArray[j + 1]) {
                int temp = newArray[j];
                newArray[j] = newArray[j + 1];
                newArray[j + 1] = temp;
            }
        }
    }
    return newArray;
}

int main(){
    int array[5];
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    int* result = reverseSort(array, size);
    for(int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}