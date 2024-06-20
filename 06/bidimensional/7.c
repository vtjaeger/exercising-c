#include <stdio.h>

int main(){
    char array[4][3] = {
            {'b', 'a', 'n'},
            {'a', 'n', 'a'},
            {'r', 'u', 'i'},
            {'m', 'n', 'e'}
    };

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%c ", array[i][j]);
        }
    }

    return 0;
}