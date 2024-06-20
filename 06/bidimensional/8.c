#include <stdio.h>

int main(){
    double array[3][4] = {
            {1.1, 2.2, 3.3, 4.4},
            {5.5, 6.6, 7.7, 8.8},
            {9.9, 10.10, 11.11, 12.12}
    };

    double soma = 0;
    int total = 3 * 4;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++) {
            soma+= array[i][j];
        }
    }
    double resultado = soma / total;
    printf("media: %.5f ", resultado);
    return 0;
}