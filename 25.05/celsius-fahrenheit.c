#include <stdio.h>

double cF(){
    int temperatura;
    printf("digite a temperatura\n");
    scanf("%d", &temperatura);
    double resultado = (temperatura * 1.8) + 32;
    return resultado;
}

double fC(){
    int temperatura;
    printf("digite a temperatura\n");
    scanf("%d", &temperatura);
    double resultado = (temperatura - 32) / 1.8;
    return resultado;
}

int main() {
    int opcao;
    printf("digite 1 para celsius para fahrenheit\ndigite 2 para fahrenheit para celsius\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("resultado: %.2f fahrenheit\n", cF());
            break;
        case 2:
            printf("resultado: %.2f celsius\n", fC());
            break;
        default:
            printf("opcao invalida");
            break;
    }
    return 0;
}
