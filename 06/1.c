#include <stdio.h>
#include <string.h>

int main(){
    char texto1[40];
    char texto2[20];
    fgets(texto1, 20, stdin);
    fgets(texto2, 20, stdin);

    if(strcmp(texto1, texto2) == 0) {
        printf("igual\n");
    } else {
        printf("diferente\n");
    }

    texto1[strlen(texto1) - 1] = '\0';
    texto2[strlen(texto2) - 1] = '\0';

    strcat(texto1, texto2);
    printf("string: %s\n", texto1);
    return 0;
}