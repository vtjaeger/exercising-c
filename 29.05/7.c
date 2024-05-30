#include <stdio.h>

int encontraMaior(double array[], int size){
    int posicaoMaior = 0;
    for(int i = 1; i < size; i++) {
        if(array[i] > array[posicaoMaior]) {
            posicaoMaior = i;
        }
    }
    return posicaoMaior;
}

int main() {
    double array[5];
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < size; i++){
        scanf("%lf", &array[i]);
    }

    for(int i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }

    printf("maior: %d", encontraMaior(array, size));
    return 0;
}
