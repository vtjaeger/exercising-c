#include <stdio.h>
#include <stdlib.h>

double soma(double array[], int size) {
    double resultado = 0;
    for(int i = 0; i < size; i++) {
        resultado+=array[i];
    }
    return resultado;
}

int main() {
    double array[5];
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++) {
        scanf("%lf", &array[i]);
    }

    printf("soma dos elementos do array: %.2f", soma(array, size));
    return 0;
}
