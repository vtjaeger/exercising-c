#include <stdio.h>

int negativos(int array[]){
    int numeros = 0;
    for(int i = 0; i < 2; i++) {
        if(array[i] < 0) {
            numeros++;
        }
    }
    return numeros;
}

int main() {
    int array[2];
    for(int i = 0; i < 2; i++ ) {
        scanf("%d", &array[i]);
    }

    printf("%d ", negativos(array));
    return 0;
}
