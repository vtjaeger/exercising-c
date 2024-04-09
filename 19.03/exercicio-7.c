#include <stdio.h>

int main()
{
    int ano;
    scanf("%d", &ano);
    
    if(ano % 4 == 0 && !(ano % 100 == 0)){
        printf("bissexto");
    }
    
    return 0;
}