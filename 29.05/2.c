#include <stdio.h>

int main() {
    int array[5];
    for(int i = 0; i < 5; i++ ) {
        array[i] = i + 1;
    }
    for(int i = 0; i < 5; i++) {
        if(i > 3) {
            printf("%d", array[i]);
        } else {
            printf("%d-", array[i]);
        }

    }

    return 0;
}
