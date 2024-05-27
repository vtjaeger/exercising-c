#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char frase[100];
    char novaFrase[150];

    scanf("%99[^\n]", frase);
    printf("frase: %s\n", frase);

    int length = strlen(frase);
    int j = 0;

    for(int i = 0; i < length; i++) {
        if(isupper(frase[i])) {
            novaFrase[i] = tolower(frase[i]);
            j++;
        } else {
            novaFrase[i] = toupper(frase[i]);
            j++;
        }
    }
    printf("nova frase: %s\n", novaFrase);
    return 0;
}
