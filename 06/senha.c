#include <stdio.h>
#include <string.h>

int main(){
    char senha[] = "senhaDificil789$";
    char input[50];

    for(int i = 0; i < 3; i++) {
        fgets(input, 50, stdin);

        input[strlen(input) - 1] = '\0';

        if(strcmp(senha, input) == 0) {
            printf("senha correta\n");
            break;
        } else {
            printf("senha incorreta\n");
        }
        if(i == 2) {
            printf("tentativas esgotadas");
        }
    }
    return 0;
}