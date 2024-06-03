#include <stdio.h>
#include <stdlib.h>

int main(){
    int inicio, final;
    scanf("%d", &inicio);
    scanf("%d", &final);
    if(inicio > final) {
        fprintf(stderr, "Erro");
        exit(1);
    }
    for(int i = inicio + 1; i < final; i++) {
        printf("%d ", i);
    }
    return 0;
}