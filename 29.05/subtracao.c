#include <stdio.h>
#include <stdlib.h>

double menos(double array[], int size) {
    double resultado = array[0];
    for(int i = 1; i < size; i++) {
        resultado-=array[i];
    }
    return resultado;
}

int main() {
    double array[5];
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++) {
        scanf("%lf", &array[i]);
    }

    printf("soma dos elementos do array: %.2f", menos(array, size));
    return 0;
}
