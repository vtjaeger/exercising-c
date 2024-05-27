#include <stdio.h>

int main () {
    int ano;

    //enquanto true
    while (1) {
        printf("digite o ano\n");
        scanf("%d", &ano);

        if(ano < 0) {
            break;
        }
        if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
            printf("ano bissexto\n"); else
            printf("nao bissexto\n");
    }

    return 0;
}