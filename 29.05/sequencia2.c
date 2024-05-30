#include <stdio.h>
#include <stdlib.h>

int* formaSequencia(int size, int x, int padrao) {
    int* sequencia = (int*) malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        sequencia[i] = x + (i * padrao);
    }
    return sequencia;
}

int main(){
    printf("tamanho da sequencia: ");
    int size;
    scanf("%d", &size);

    int x;
    printf("primeiro termo: ");
    scanf("%d", &x);

    int padrao;
    printf("padrao da sequencia: ");
    scanf("%d", &padrao);

    int* resultado = formaSequencia(size, x, padrao);
    for(int i = 0; i < size; i++) {
        printf("%d ", resultado[i]);
    }

    free(resultado);

    return 0;
}