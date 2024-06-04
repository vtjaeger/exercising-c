#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if(x <= 0 || x > 45) {
        return 1;
    }

    int fibonacci[x];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i < x; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    for(int i = 0; i < x; i++) {
        printf("%d", fibonacci[i]);
    }
    return 0;
}
