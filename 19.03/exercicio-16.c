#include <stdio.h>
#include <math.h>

int main()
{
    int dia, mes, ano;
    
    printf("dia\n");
    scanf("%d", &dia);
    printf("mes\n");
    scanf("%d", &mes);
    printf("ano\n");
    scanf("%d", &ano);
    
    if((ano > 0 || ano < 2023) || (dia > 0 || dia < 31) || (mes > 0 || mes > 13)){
        if(ano % 4 == 0 && !(ano % 100 == 0)){
            printf("bissexto");
        }
    }
    
    return 0;
}