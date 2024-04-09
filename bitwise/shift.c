#include <stdio.h>

//descola a quantidade de bits para determinado lado, x vezes
int main (){
    int a = 10; // 00001010

    //direita
    int resultado =  a>>3;
    printf("resultado: %d\n\n", resultado);

    // 0000 1010
    // 0000 0001 -> tres casas para a direita, os numeros a direita se perdem

    // tentando voltar tres casas
    printf("resultado: %d\n", resultado << 3);
    //retorna 0000 1000 -> os numeros a esquerda voltam como 0




    int x = 2; // 00000010
    //esquerda
    int teste = x << 2;
    printf("resultado: %d\n\n", teste);
    // retorna 0000 0100 -> 2 casas para a direita (resultado 8)



    int y = -22; // 11101010
    //direita
    printf("resultado: %d", y>>4);
    // retorna 1111 1110. quando for negativo, os bits novos sao 1


    return 0;
}