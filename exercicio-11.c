#include <stdio.h>
#include <math.h>

int main()
{
    double preco;
    int quantidade;
    
    printf("preco\n");
    scanf("%lf", &preco);

    printf("quantidade\n");
    scanf("%d", &quantidade);
    
    double valor = preco * quantidade;
    
    printf("%.2f", valor);
    
    return 0;
}