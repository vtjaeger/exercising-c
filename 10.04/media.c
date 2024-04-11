#include <stdio.h>

int main (){
    char continuar = 'S';
    while(continuar == 'S'){
        int quantidade, ehCrescente = 1;

        float audiencia, soma = 0, anterior = 0;

        printf("digite quantas vezes\n ");
        scanf("%d", &quantidade);

        for(int i = 1; i <= quantidade; i++){
            scanf("%f", &audiencia);
            soma+= audiencia;

            if(audiencia <= anterior){
                ehCrescente = 0;
            }
            anterior = audiencia;
        }

        if(ehCrescente == 1){
            printf("sempre crescente. ");
        } else {
            printf("nem sempre crescente. ");
        }
        printf("media: %.1f\n\n", soma / quantidade);

        printf("deseja continuar?");
        scanf("%c", &continuar);
    }
}