#include <stdio.h>

int main(){
    int x;
    printf("digite um numero para calcular o fatorial: ");
    scanf("%d", &x);

    int fatorial = 1;
    for(int i = 1; i <= x; i++){
        fatorial *= i;
    }
    printf("%d", fatorial);
    return 0;
}