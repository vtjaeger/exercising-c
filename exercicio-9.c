#include <stdio.h>
#include <math.h>

int main()
{
    double nota1, nota2;
    
    printf("nota A\n");
    scanf("%lf", &nota1);
    
    printf("nota B\n");
    scanf("%lf", &nota2);
    
    double grauA = nota1 * 0.33;
    double grauB = nota2 * 0.67;
    
    double resultado = grauA + grauB;
    
    if(resultado < 0){
        printf("erro");
    } else {
        printf("\nresultado = %.2f",  resultado);
        
        if(resultado < 7){
        printf("\ndeve realizar o grau c");
        }
    }
    return 0;
}