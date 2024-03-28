#include <stdio.h>

int main(){
    int x, y;
    printf("valor de x:");
    scanf("%d", &x);
    printf("valor de y:");
    scanf("%d", &y);

    int maior, menor, somaImpar = 0, somaPar = 0;

    if(x > y){
        maior = x;
        menor = y;
    } else {
        menor = x;
        maior = y;
    }

    for(int i = menor; i <= maior; i++){
        if(i % 2 == 0){
            somaPar += i;
        } else {
            somaImpar += i;
        }
    }

    printf("soma dos pares: %d\n", somaPar);
    printf("soma dos impares: %d\n", somaImpar);

    return 0;
}