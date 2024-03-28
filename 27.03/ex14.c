#include <stdio.h>

int main(){
    int x, divisivel = 0;
    printf("digite um numero: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            divisivel++;
        }
    }

    if(divisivel <= 2){
        printf("%d é primo", x);
    } else {
        printf("%d nao é divisivel", x);
    }

    return 0;
}