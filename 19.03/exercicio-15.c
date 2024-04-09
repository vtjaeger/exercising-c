#include <stdio.h>
#include <math.h>

int main()
{
    char opcao;
    int x, y, resultado;
    
    printf("Jogador 1 escolhe para\nP para par, I para impar\n");
    scanf("%c", &opcao);
    
    switch(opcao){
        case 'P':
            printf("jogador 1:\n");
            scanf("%d", &x);
            printf("jogador 2:\n");
            scanf("%d", &y);
            resultado = x + y;
            
            if(resultado % 2 == 0){
                printf("par, jogador 1 venceu");
            } else {
                printf("impar, jogador 2 venceu");
            }
            break;
        
        case 'I':
            printf("jogador 1:\n");
            scanf("%d", &x);
            printf("jogador 2:\n");
            scanf("%d", &y);
            resultado = x + y;
            if((x + y) % 2 == 0){
                printf("par, jogador 2 venceu");
            } else {
                printf("impar, jogador 1 venceu");
            }
            break;
    }
    
    return 0;
}