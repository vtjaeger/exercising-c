#include <stdio.h>
#include <stdlib.h>

double calculaMedia(int array[], int size){
    double resultado = 0;
    for(int i = 0; i < size; i++) {
        resultado+=array[i];
    }
    return resultado / size;
}

int main(){
    int array[5];
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("%.2f", calculaMedia(array, size));
    return 0;
}