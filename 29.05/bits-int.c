#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int binarioParaDecimal(int* bits) {
    int numero = 0;
    for(int i = 0; i < 8; i++) {
        numero+= bits[i] * pow(2, 7 - i);
    }
    return numero;
}

int main() {
    char input[9];
    scanf("%8s", input);

    if(strlen(input) != 8) {
        fprintf(stderr, "erro\n");
        return 1;
    }
    int bits[8];
    for(int i = 0; i < 8; i++) {
        bits[i] = input[i] - '0';
    }
    printf("%d\n", binarioParaDecimal(bits));
    return 0;
}
