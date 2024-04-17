#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("digite o valor de a, b e c\n");
    scanf("%d %d %d", &a, &b, &c);

    int delta = pow(b, 2) - 4 * a * c;

    if(delta >= 0){
        float x1 = (-b + sqrt(delta)) / 2 * a;
        float x2 = (-b - sqrt(delta)) / 2 * a;
        printf("valor de x1 = %.2f\n", x1);
        printf("valor de x2 = %.2f\n", x2);
    } else {
        printf("raizes igual a 0");
    }

    return 0;
}
