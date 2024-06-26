#include <stdio.h>

void imprimirComPointeiros(char *array, int linhas, int colunas){
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%c " , *(array + i * colunas + j));
        }
        printf("\n");
    }
}

int main(){
    char array[4][2] = {
            {'a', 'j'},
            {'u', 'f'},
            {'n', 'v'},
            {'h', 'i'}
    };

    imprimirComPointeiros(&array[0][0], 4, 2);
    return 0;
}