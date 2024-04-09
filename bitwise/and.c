#include <stdio.h>

int main (){
    int a = 10; // 00001010
    int b = 5;  // 00000101

    int dezBinario = 0b00001010;
    int resultado =  a & b;

    printf("resultado: %d\n\n", resultado);
    // retorna 0 em numeros binarios -> 00000000, porque nenhum dos numeros sao iguais
    // compilador transforma o numero binario em decimal, por isso imprime 0



    int x = 2;
    int y = 3;

    int teste = x & y;
    printf("resultado: %d", teste);
    // retorna 2 (em binario 00000010) porque apenas o penultimo bit dos dois operandos é igual a 1

    return 0;
}