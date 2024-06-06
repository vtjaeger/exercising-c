#include <stdio.h>
#include <string.h>

int main(){
    char texto[] = "texto de exemplo";

    size_t tamanhoTexto = strlen(texto);

    printf("tamanho da string \"%s\" eh %zu.\n", texto, tamanhoTexto);

    return 0;
}