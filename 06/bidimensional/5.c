#include <stdio.h>

int main(){
    int linhas1, colunas1;

    printf("linhas do array 1\n");
    scanf("%d", &linhas1);
    printf("colunas do array 1\n");
    scanf("%d", &colunas1);

    int matriz1[linhas1][colunas1];

    int linhas2, colunas2;

    printf("linhas do array 2\n");
    scanf("%d", &linhas2);
    printf("colunas do array 2\n");
    scanf("%d", &colunas2);

    int matriz2[linhas2][colunas2];

    int tamanhoTotal = (linhas1 * colunas1) + (linhas2 * colunas2);

    int arrayFinal[tamanhoTotal];
    int aux = 0;

    for(int i = 0; i < linhas1; i++) {
        for(int j = 0; j < colunas1; j++) {
            scanf("%d", &matriz1[i][j]);
            arrayFinal[aux] = matriz1[i][j];
            aux++;
        }
    }

    for(int i = 0; i < linhas2; i++) {
        for(int j = 0; j < colunas2; j++) {
            scanf("%d", &matriz2[i][j]);
            arrayFinal[aux] = matriz2[i][j];
            aux++;
        }
    }

    for(int i = 0; i < tamanhoTotal; i++) {
        printf("%d ", arrayFinal[i]);
    }

    return 0;
}