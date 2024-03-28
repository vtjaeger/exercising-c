#include <stdio.h>

int main() {
    int soma = 0;

    for(int i = 0; i <= 200; i++){
        int divisores = 0;

        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                divisores++;
                break;
            }
        }
        if(divisores == 0){
            printf("%d\n", i);
            soma+= i;
        }
    }
    printf("soma: %d", soma);

    return 0;
}