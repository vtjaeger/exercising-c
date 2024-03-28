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

    double desconto, valor;
    
    if(quantidade == 3 || quantidade == 4){
        desconto = 0.10;
        valor = (preco - (preco * desconto)) * quantidade;
    }
    else if(quantidade >= 5 && quantidade <= 10){
        desconto = 0.15;
        valor = (preco - (preco * desconto)) * quantidade;
    }
    else if(quantidade > 10){
        desconto = 0.2;
        valor = (preco - (preco * desconto)) * quantidade;
    } else {
        valor = preco * quantidade;
    }

    printf("%.2f", valor);

    return 0;
}
