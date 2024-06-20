#include <stdio.h>

int main(){
    int linhas1, colunas1;

    printf("linhas do array 1\n");
    scanf("%d", &linhas1);
    printf("colunas do array 1\n");
    scanf("%d", &colunas1);

    double matriz1[linhas1][colunas1];

    int linhas2, colunas2;

    printf("linhas do array 2\n");
    scanf("%d", &linhas2);
    printf("colunas do array 2\n");
    scanf("%d", &colunas2);

    double matriz2[linhas2][colunas2];

    int tamanho = (linhas1 * colunas1) + (linhas2 * colunas2);
    int positivos = tamanho - 1;
    int negativos = 0;

    double arrayFinal[tamanho];

    for(int i = 0; i < linhas1; i++) {
        for(int j = 0; j < colunas1; j++) {
            scanf("%lf", &matriz1[i][j]);
            if(matriz1[i][j] < 0) {
                arrayFinal[positivos] = matriz1[i][j];
                positivos--;
            } else {
                arrayFinal[negativos] = matriz1[i][j];
                negativos++;
            }
        }
    }

    for(int i = 0; i < linhas2; i++) {
        for(int j = 0; j < colunas2; j++) {
            scanf("%lf", &matriz2[i][j]);
            if(matriz2[i][j] < 0) {
                arrayFinal[positivos] = matriz2[i][j];
                positivos--;
            } else {
                arrayFinal[negativos] = matriz2[i][j];
                negativos++;
            }
        }
    }

    for(int i = 0; i < tamanho; i++){
        printf("%.1f ", arrayFinal[i]);
    }


    return 0;
}