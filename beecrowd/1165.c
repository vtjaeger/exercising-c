#include <stdio.h>

int main() {
    int linhas;

    scanf("%d", &linhas);

    for(int i = linhas; i > 0; i--) {
        int divisivel = 0;
        int numero;

        scanf("%d", &numero);

        for(int j = 1; j <= numero; j++) {
            if(numero % j == 0) {
                divisivel++;
            }
        }
        if(divisivel <= 2) {
            printf("%d eh primo\n", numero);
        } else {
            printf("%d nao eh primo\n", numero);
        }
    }
    printf("\n");
    return 0;
}
