#include <stdio.h>

int main() {
    int array[10];
    int aux = 10;

    for(int i = 0; i < 10; i++){
        if(i < 5) {
            array[i] = i + 1;
        } else {
            array[i] = aux;
            aux+= 10;
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
