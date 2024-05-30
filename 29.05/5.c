#include <stdio.h>

int contaRepeticoes(int array[], int numero){
    int repeticoes = 0;
    for(int i = 0; i < 5; i++) {
        if(array[i] == numero){
            repeticoes++;
        }
    }
    return repeticoes;
}

int main() {
    int array[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    int numero;
    printf("numero: \n");
    scanf("%d", &numero);

    printf("%d", contaRepeticoes(array, numero));

    return 0;
}
