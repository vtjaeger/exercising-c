#include <stdio.h>

int main(){
    int array[2][3] = {
            {24, 1, 75},
            {42, 87, 2}
    };

    int soma = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            soma+= array[i][j];
        }
    }
    printf("%d", soma);
    return 0;
}