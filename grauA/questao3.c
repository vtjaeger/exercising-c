#include <stdio.h>

void tabuada(int x){
    for(int i = 1; i <= 10; i++){
        printf("%dx%d = %d \n", x, i, x * i);
    }
    return;
}

int main () {
    printf("digite um numero que deseja saber a tabuada\n");
    int x;
    scanf("%d", &x);

    while(x < 2 || x > 999) {
        printf("digite um numero valido\n");
        scanf("%d", &x);
    }
    tabuada(x);

    return 0;
}