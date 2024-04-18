#include <stdio.h>

void quadrados(int x){

    for(int i = 1; i <= x; i++){
        if(i % 2== 0){
            printf("%d\n", i * i);
        }
    }
}

int main () {
    int n;
    printf("digite um numero entre 5 e 5000\n");
    scanf("%d", &n);

    while(n < 5 || n > 5000) {
        printf("digite novamente\n");
        scanf("%d", &n);
    }
    quadrados(n);

    return 0;
}