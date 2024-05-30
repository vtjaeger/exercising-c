#include <stdio.h>

int main() {
    int array[11];
    for(int i = 0; i < 11; i++) {
        array[i] = i * i;
    }
    printf("array: ");
    for(int i = 0; i < 11; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
