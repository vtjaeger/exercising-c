#include <stdio.h>

double exercicio9(int linhas, int colunas, double array[linhas][colunas]) {
    double somaPares = 0;
    int aux = 0;

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if((int)array[i][j] % 2 == 0) {
                somaPares+= array[i][j];
                aux++;
            }
        }
    }
    double media = somaPares / aux;
    return media;
}

int main(){
    double array[3][4] = {
            {1.1, 2.2, 3.3, 4.4},
            {5.5, 6.6, 7.7, 8.8},
            {9.9, 10.10, 11.11, 12.12}
    };

    double media = exercicio9(3,4,array);

    printf("%.5f", media);
    return 0;
}