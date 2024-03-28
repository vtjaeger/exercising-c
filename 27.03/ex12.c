#include <stdio.h>

int main(){
    int x, soma = 0, cont = 0;
    double media = 0;

    while(1){
        printf("digite o valor de x: ");
        scanf("%d", &x);

        if(x < 0){
            break;
        }
        soma += x;
        cont++;

    }

    media = soma / cont;
    printf("%.2f", media);

    return 0;
}