#include <stdio.h>

int ocorrenciasCaracter(char *texto, char caracter) {
    int contagem = 0;
    char *ptr = texto;

    while(*ptr != '\0') {
        if(*ptr == caracter){
            contagem++;
        }
        ptr++;
    }
    return contagem;
}

int main(){
    char texto[100];
    fgets(texto, 100, stdin);
    char c;
    scanf(" %c", &c);

    int result = ocorrenciasCaracter(texto, c);
    printf("%d\n", result);
    return 0;

}