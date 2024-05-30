#include <stdio.h>

int main() {
    int array[10];
    for(int i = 9; i >= 0; i--) {
        array[i] = 10 - i;
    }

    printf("array: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
