#include <stdio.h>

int main(){
    char string[50];
    fgets(string, 50, stdin);
    char *ptr = string;

    printf("endereco de ptr: %p\n", ptr);
    printf("3 letra: %c\n", *(ptr + 2));
    printf("4 letra: %c\n", *(ptr + 3));
    return 0;
}