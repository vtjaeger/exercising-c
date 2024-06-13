#include <stdio.h>

int soma(int *array, int size){
    int result = 0;
    int *ptr = array;

    for(int i = 0; i < size; i++) {
        result+=ptr[i];
//         result += *(array + i);
    }
    return result;
}

int main(){
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    int result = soma(array, size);
    printf("%d\n", result);
    return 0;
}