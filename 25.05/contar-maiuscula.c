#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char frase[100];
    scanf("%99[^\n]", frase);
    printf("frase: %s\n", frase);

    int lenght = strlen(frase);
    int maiuscula = 0;

    for(int i = 0; i < lenght; i++){
        if(isupper(frase[i])) {
            maiuscula++;
        }
    }
    printf("letras maisculas: %d\n", maiuscula);
    return 0;
}