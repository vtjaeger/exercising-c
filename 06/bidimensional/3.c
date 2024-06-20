#include <stdio.h>

int main(){
    int linhas, colunas;
    scanf("%d", &linhas);
    scanf("%d", &colunas);

    int qntPositivos = 0;
    int aux = 0;

    int valores [linhas][colunas];
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++){
            scanf("%d", &valores[i][j]);
            if(valores[i][j] >= 0) {
                qntPositivos++;
            }
        }
    }

    int positivos[qntPositivos];
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if(valores[i][j] >= 0) {
                positivos[aux] = valores[i][j];
                aux++;
            }
        }
    }

    // array original
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++){
            printf("%d ", valores[i][j]);
        }
        printf("\n");
    }

    //array positivos
    for(int i = 0; i < qntPositivos; i++) {
        printf("%d ", positivos[i]);
    }

}