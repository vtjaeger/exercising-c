#include <stdio.h>

int main(){
    char opcao;

    int casados = 0, solteiros = 0, viuvo = 0, outro = 0;
    for(int i = 0; i < 5; i++){
        printf("digite:\n"
               "S para solteiro \n"
               "C para casado\n"
               "V para viuvo\n"
               "outro para qualquer coisa\n");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 's':
                solteiros++;
                break;
            case 'c':
                casados++;
                break;
            case 'v':
                viuvo++;
                break;
            default:
                outro++;
                break;
        }
    }
    printf("%d\n", casados);
    printf("%d\n", solteiros);
    printf("%d\n", viuvo);
    printf("%d\n", outro);

    return 0;
}