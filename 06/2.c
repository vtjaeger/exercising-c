#include <stdio.h>

int main(){
    int x = 20;
    float y = 2.4f;

    int *px = &x;
    float *py = &y;

    printf("ponteiro x (int): %p\n", px);
    printf("ponteiro y (float): %p\n", py);

    return 0;
}