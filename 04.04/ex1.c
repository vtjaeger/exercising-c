#include <stdio.h>

void imprir(int num){
    for(int i = 1; i <= num; i++){
        printf("%d\n", i);
    }
}

int main()
{
    printf("digite um numero\n");
    int numero;
    scanf("%d", &numero);
    imprir(numero);
    
    return 0;
}
