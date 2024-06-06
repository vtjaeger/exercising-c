#include <stdio.h>

int main(){
    int x = 20;

    int *ptr;
    ptr = &x;

    printf("valor de x: %d\n", x);
    printf("endereco de x: %p\n", &x);
    printf("valor de ptr: %p\n", ptr);
    printf("valor apontado por ptr: %d\n", *ptr);
//
//    x = 30;
//
//    printf("\n\n");
//
//    printf("valor de x: %d\n", x);
//    printf("endereco de x: %p\n", &x);
//
//    printf("\n\n");
//
//    printf("valor de ptr: %p\n", ptr);
//    printf("Valor apontado por ptr: %d\n", *ptr);

    *ptr = 15;

    printf("\n\n");

    printf("valor de x: %d\n", x);
    printf("endereco de x: %p\n", &x);
    printf("valor de ptr: %p\n", ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);

    return 0;
}