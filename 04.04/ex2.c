#include <stdio.h>

char mediaNotas(float notaA, float notaB, float notaC){
    float media = (notaA + notaB + notaC) / 3;
    
    if(notaA < 0 || notaB < 0 || notaC < 0){
        return 'E';
    } 
    
    if(media <= 4.0) {
        return 'D';
    } else if (media <= 7.0){
        return 'C';
    } else if(media <= 9.0){
        return 'B';
    } else {
        return 'A';
    }
}

int main()
{
    float notaA, notaB, notaC;
    printf("nota a\n");
    scanf("%f", &notaA);
    printf("nota b\n");
    scanf("%f", &notaB);
    printf("nota c\n");
    scanf("%f", &notaC);
    
    char media = mediaNotas(notaA, notaB, notaC);
    printf("%c", media);
    
    return 0;
}
