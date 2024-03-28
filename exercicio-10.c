#include <stdio.h>
#include <math.h>

int main()
{
    char letra;
    scanf("%c", &letra);
    
    if(letra == 'a' || letra == 'e' || letra == 'u' || letra == 'i' || letra == 'o'){
        printf("vogal");
    } else {
        printf("nao vogal");
    }
    
    return 0;
}