#include <stdio.h>

void trocaValores(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 10;
    int y = 20;
    trocaValores(&x, &y);
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}