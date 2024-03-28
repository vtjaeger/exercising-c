#include <stdio.h>

int main(){
    int soma = 0;
    for(int i = 0; i <= 198; i++){
        soma += i;
    }
    printf("%d", soma);
    return 0;
}