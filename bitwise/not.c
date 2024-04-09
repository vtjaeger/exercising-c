#include <stdio.h>

// analisa bit a bit de um valor e inverta cada todos. 0 vira 1, 1 vira 0. sempre muda o sinal do numero passado, se for positivo, retorna negativo e ao contrario
int main (){
    int a = 10; // 00001010

    int resultado =  ~a;
    printf("resultado: %d\n\n", resultado);
                                                                // 0000 1010
                                                                // 1111 0101 -> -11


    int x = 2; // 00000010

    int teste = ~x;
    printf("resultado: %d\n\n", teste);

                                                                // 0000 0010
                                                                // 1111 1101 -> -3

    int y = -22; // 11101010
    printf("resultado: %d", ~y);
                                                                // 1110 1010
                                                                // 0001 0101 -> +21

    return 0;
}