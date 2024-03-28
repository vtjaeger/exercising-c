#include <stdio.h>
#include <math.h>

int main()
{
    printf("digite 1 para somar dois numeros\n");
    printf("digite 2 para subtrair dois numeros\n");
    printf("digite 3 para multiplicar dois numeros\n");
    printf("digite 4 para dividir dois numeros\n");
    printf("digite 5 para realizar uma potencia entre dois numeros\n");
    printf("digite 6 para calcular a riaz quadrade de um numero\n");
    printf("qualquer tecla para sair do programa\n");
    
    int opcao, valor1, valor2;
    double resultado;
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
        printf("valor 1\n");
        scanf("%d", &valor1);
        printf("valor 2\n");
        scanf("%d", &valor2);
        resultado = valor1 + valor2;
        printf("%.2f", resultado);
        break;
        
        
        case 2:
        printf("valor 1\n");
        scanf("%d", &valor1);
        printf("valor 2\n");
        scanf("%d", &valor2);
        resultado = valor1 - valor2;
        printf("%.2f", resultado);
        break;
        
        
        case 3:
        printf("valor 1\n");
        scanf("%d", &valor1);
        printf("valor 2\n");
        scanf("%d", &valor2);
        resultado = valor1 * valor2;
        printf("%.2f", resultado);
        break;
        
        
        case 4:
        printf("valor 1\n");
        scanf("%d", &valor1);
        printf("valor 2\n");
        scanf("%d", &valor2);
        resultado = (valor1 / valor2);
        printf("%.2f", resultado);
        break;
        
        
        case 5:
        printf("valor 1\n");
        scanf("%d", &valor1);
        printf("valor 2\n");
        scanf("%d", &valor2);
        resultado = pow(valor1, valor2);
        printf("%.2f", resultado);
        break;
        
        
        case 6:
        printf("valor 1\n");
        scanf("%d", &valor1);
        resultado = sqrt(valor1);
        printf("%.2f", resultado);
        break;
    }

    return 0;
}