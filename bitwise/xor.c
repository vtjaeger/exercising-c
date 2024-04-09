#include <stdio.h>

// analisa bit a bit de dois valores e retorna 1 se forem diferentes ( um bit for 1 e outro 0 e ao contrario)
int main (){
    int a = 10; // 00001010
    int b = 5;  // 00000101

    int resultado =  a ^ b;

    printf("resultado: %d\n\n", resultado);
                                                                // 0000 1010
                                                                // 0000 0101
                                                                // 0000 1111 -> em decimal 15


    int x = 2; // 00000010
    int y = 3; // 00000011

    int teste = x ^ y;
    printf("resultado: %d", teste);

                                                                // 0000 0010
                                                                // 0000 0011
                                                                // 0000 0001 -> em decimal 1


    return 0;
}