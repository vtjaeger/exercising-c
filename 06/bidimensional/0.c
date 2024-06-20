#include <stdio.h>

int main(){
    int valores [3][3] = {
            {423, -23, 12},
            {176, 0, 5},
            {6, 24, -1}
    };
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", valores[i][j]);
        }
        printf("\n");
    }
}