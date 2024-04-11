#include <stdio.h>

int main(){

    while(1){
        int num;
        printf("digite um numero\n");
        scanf("%d", &num);

        if(num < 0){
            break;
        }

        int soma = 0;

        for(int i = 1; i < num; i++){
            if(num % i == 0){
                soma+=i;
            }
        }

        if(soma == num){
            printf("perfeitos\n");
        } else {
            printf("nao eh perfeito\n");
        }
    }
}