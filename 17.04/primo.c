#include <stdio.h>

int main () {
    printf("digite um numero");
    int numero;
    int divisivel = 0;
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            divisivel++;
        }
    }

    if(divisivel <= 2){
        printf("numero primo");
    } else 
        printf("not primo");

    return 0;
}