#include <stdio.h>

int main () {
    int tamanho;
    printf("digite o tamanho do array\n");
    int array[tamanho];

    scanf("%d", &tamanho);

    for(int i = 0; i < tamanho; i++) {
        printf("digite o numero para a posicao %d\n", i + 1);
        scanf("%d", &array[i]);
    }
    printf("array: \n");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}