#include <stdio.h>

int main(){
    int x, y;
    printf("digite um numero:\n");
    scanf("%d", &x);
    printf("digite outro numero:\n");
    scanf("%d", &y);

    int maior, menor;

    if(x > y){
        maior = x;
        menor = y;
    } else {
        maior = y;
        menor = x;
    }

    printf("numeros pares entre %d e %d\n", maior, menor);
    for(int i = menor; i <= maior; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}