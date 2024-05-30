#include <stdio.h>
#include <stdlib.h>

double vezes(double array[], int size) {
    double resultado = 1;
    for(int i = 0; i < size; i++) {
        resultado*=array[i];
    }
    return resultado;
}

int main() {
    double array[5];
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++) {
        scanf("%lf", &array[i]);
    }

    printf("multiplicacao dos elementos do array: %.2f", vezes(array, size));
    return 0;
}
