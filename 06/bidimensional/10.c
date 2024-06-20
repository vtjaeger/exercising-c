#include <stdio.h>

int exercicio10(int x, int y, int linhas, int colunas, int array[linhas][colunas]){
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if(i == x && j == y) {
                return array[i][j];
            }
        }
    }
    return -1;
}

int main(){
    int array[3][3] = {
            {1, 4, 6},
            {2, 8, 1},
            {9, 10, 66}
    };

    int x, y;
    printf("posicao x:\n");
    scanf("%d", &x);

    printf("posicao y:\n");
    scanf("%d", &y);
    int posicao = exercicio10(x, y, 3, 3, array);

    printf("%d", posicao);

    return 0;
}