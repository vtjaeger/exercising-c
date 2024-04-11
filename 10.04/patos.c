#include <stdio.h>

int main(){
    int patinhos;

    scanf("%d", &patinhos);
    for(int i = patinhos; i >= 1; i--){
        if(i >= 2){
            printf("\n%d patinhos\n"
                   "Foram passear\n"
                   "Alem das montanhas\n"
                   "Para brincar\n"
                   "A mamae gritou\n"
                   "Quack quack quack\n"
                   "Mas so %d patinhos\n"
                   "Voltaram de la\n\n", i, i -1);
        } else {
            printf("\n%d patinho\n"
                   "Foi passear\n"
                   "Alem das montanhas\n"
                   "Para brincar\n"
                   "A mamae gritou\n"
                   "Quack quack quack\n"
                   "Mas nenhum patinho\n"
                   "Voltou de la\n\n", i);
        }
    }
    printf("\nA mamae patinha\n"
           "Foi procurar\n"
           "Alem das montanhas\n"
           "Na beira do mar\n"
           "A mamae gritou\n"
           "Quack quack quack\n"
           "E os %d patinhos\n"
           "Voltaram de la\n\n", patinhos);
}