#include <stdio.h>

int main() {
    int linhas;

    scanf("%d", &linhas);

    for(int i = 0; i < linhas; i++) {
        int qnt;
        scanf("%d", &qnt);

        int soma = 0;
        for(int j = 0; j < qnt; j++) {
            int numero;
            scanf("%d", &numero);
            soma += numero;
        }
        printf("%d\n", soma);
    }
    return 0;
}
