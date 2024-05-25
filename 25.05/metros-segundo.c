#include <stdio.h>

int main() {
    int metros;
    double segundos;

    printf("digite os metros\n");
    scanf("%d", &metros);

    printf("digite os segundos\n");
    scanf("%lf", &segundos);

    double km = metros / 1000.0;
    double horas = segundos / 3600.0;

    double kmH = km / horas;
    printf("\nem km/h: %.2f", kmH);

    return 0;
}
