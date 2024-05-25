#include <stdio.h>

int main() {
    int ar[5];
    int tamanho = sizeof(ar) / sizeof(ar[0]);
    int soma = 0;

    printf("digite os numeros do array\n");
    for(int i = 0; i < tamanho; i++) {
        scanf("%d", &ar[i]);

        soma += ar[i];
    }

    printf("numeros do array\n");
    for(int i = 0; i < tamanho; i++ ) {
        printf("%d ", ar[i]);
    }

    printf("\n");

    double media = (double) soma / tamanho;
    printf("media do array: %.2f", media);

    return 0;
}
