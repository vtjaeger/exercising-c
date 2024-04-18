#include <stdio.h>

void numerosPares(){
    int numero = 0;
    int quantidade = 0;

    while(quantidade < 10){

        printf("digite um numero\n");
        scanf("%d", &numero);

        if(numero < 0){
            break;
        }
        
        printf("numeros pares entre 1 e %d\n", numero);
        
        for(int i = 1; i <= numero; i++){
            if(i % 2 == 0){
                printf("%d\n", i);
            }
        }
        quantidade++;
    }
}

int main () {
    numerosPares();
    
    return 0;
}