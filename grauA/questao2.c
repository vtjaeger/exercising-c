#include <stdio.h>

int pares(int x){
    int qnt = 0;
    int positivos = 0;
    while(qnt < x){
        int numero;
        scanf("%d", &numero);
        
        if(numero % 2 == 0) {
            positivos++;
        }
        
        qnt++;
    }
    return positivos;
}

int main () {
    int x;

    printf("digite a quantidade de valores\n");
    scanf("%d", &x);
    int resultado = pares(x);

    printf("foram digitados %d valores positivos", resultado);

    return 0;
}