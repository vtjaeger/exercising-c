#include <stdio.h>

int main(){
    int array[] = {50, 543, 23, 13};
    int *ptr = array;
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    return 0;
}