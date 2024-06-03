#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20] = "teste";
    char palavra_oculta[20];
    int tamanho = strlen(palavra);
    int acertou = 0; // false

    for(int i = 0; i < tamanho; i++) {
        palavra_oculta[i] = 0;
    }
    palavra_oculta[tamanho] = '\0';

    while(!acertou) {
        printf("Palavra: %s\n", palavra_oculta);
        char letra;
        printf("%s", palavra_oculta);
        scanf(" %c", &letra);
        int encontrou = 0;

        for(int i = 0; i < tamanho; i++) {
            if(palavra[i] == letra) {
                palavra_oculta[i] = letra;
                encontrou = 1;
            }
        }

        if(!encontrou) {
            printf("nao encontrado");
        }
        if (strcmp(palavra, palavra_oculta) == 0) {
            acertou = 1;
        }
    }
    printf("acertou");
    return 0;
}