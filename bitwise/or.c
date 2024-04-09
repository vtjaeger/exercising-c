#include <stdio.h>

// analisa bit a bit de dois valores e retorna 1 se pelo menos 1 dos bits forem = 1
int main (){
    int a = 10; // 00001010
    int b = 5;  // 00000101

    int resultado =  a | b;

    printf("resultado: %d\n\n", resultado);
    // retorna 00001111 (15 em decimal) porque os 4 ultimos bits analisados sao = 1



    int x = 2; // 00000010
    int y = 3; // 00000011

    int teste = x | y;
    printf("resultado: %d", teste);
    // retorna 00000011 (3 em decimal) porque os ultimos 2 bits analisados sao =1

    return 0;
}