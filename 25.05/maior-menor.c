#include <stdio.h>

int main () {
    int x, y, z;
    printf("digite os valores para 3 numeros\n");

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    int maior, meio, menor;

    if(x > z && x > y) {
        maior = x;
        if(y > z) {
            meio = y;
            menor = z;
        } else {
            meio = z;
            menor = y;
        }
    } else if (y > z && y > x) {
        maior = y;
        if(x > z) {
            meio = x;
            menor = z;
        } else {
            meio = z;
            menor = x;
        }
    } else {
        maior = z;
        if(x > y) {
            meio = x;
            menor = y;
        } else {
            meio = y;
            menor = x;
        }
    }
    printf("maior: %d\nmeio: %d\nmenor: %d\n", maior, meio, menor);
    return 0;
}