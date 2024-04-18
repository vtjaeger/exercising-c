#include <stdio.h>

int soma(int x, int y){
    int maior, menor;
    int somas;

    if(x > y ) {
        maior = x;
        menor = y;
    } else if(y > x){
        maior = y;
        menor = x;
    } else {
        maior = x;
        menor = y;
    }

    for(int i = menor; i <= maior; i++){
        if(i % 13 != 0){
            somas+= i;
        }
    }

    int somatario = somas;
    return somatario;
}


int main () {
    int x, y;
    printf("digite dois numeros\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x <= 0 || y <= 0) {
        printf("digite dois numeros maiores que 0\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    int resultado = soma(x, y);
    printf("%d", resultado);

    return 0;
}