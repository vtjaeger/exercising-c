#include <stdio.h>
#include <stdlib.h>

int* decimalParaBinario(int numero) {
    int* bits = (int*) malloc(8 * sizeof(int));

    for(int i = 0; i < 8; i++) {
        bits[i] = 0;
    }

    for(int i = 7; i >= 0; i--) {
        int resto;
        resto = numero % 2;
        bits[i] = resto;
        numero /= 2;

    }
    return bits;
}

int main() {
    int x;
    scanf("%d", &x);
    int* bits = decimalParaBinario(x);
    for(int i = 0; i < 8; i++) {
        printf("%d", bits[i]);
    }
    free(bits);
    return 0;
}
