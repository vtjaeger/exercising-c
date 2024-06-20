#include <stdio.h>

int main(){
    char letras[3][3] = {
            {'a', 'f', 'd'},
            {'n', 'b', 'w'},
            {'k', 'z', 'y'}
    };

    char letra;
    scanf(" %c", &letra);
    int encontrado = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(letras[i][j] == letra){
                printf("%c encontrada na linha %d coluna %d ", letra, i, j);
                encontrado = 1;
            }
        }
    }
    if(encontrado == 0) {
        printf("%c nao encontrada", letra);
    }
}