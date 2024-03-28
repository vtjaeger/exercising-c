#include <stdio.h>
#include <math.h>

int main()
{
    double saldo;
    scanf("%lf", &saldo);
    printf("saldo R$%.2f\n", saldo);
    
    int opcao;
    printf("1 - sacar\n2- depositar\n");
    scanf("%d", &opcao);
    
    if(opcao == 1){
        double valorSaque;
        printf("valor a sacar\n");
        scanf("%lf", &valorSaque);
        
        if(valorSaque < 301 || valorSaque < saldo){
            saldo = saldo - valorSaque;
            printf("valor final: R$%.2f", saldo);
        } else {
            printf("erro");
        }
        
        
    } else if (opcao == 2){
        double valorDeposito;
        printf("valor a depositar\n");
        scanf("%lf", &valorDeposito);
        
        if(valorDeposito < 0){
            printf("indisponvel");
        } else {
           saldo = saldo + valorDeposito;
            printf("valor final: R$%.2f", saldo); 
        }
    }
    
    return 0;
}