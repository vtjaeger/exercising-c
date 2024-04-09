#include <stdio.h>
#include <math.h>

int main()
{
    double peso, altura, massa;
    printf("peso\n");
    scanf("%lf", &peso);
    
    printf("altura\n");
    scanf("%lf", &altura);
    
    double imc = peso / (altura * altura);
    
    printf("%f\n", imc);
    
    return 0;
}