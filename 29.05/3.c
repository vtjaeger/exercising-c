#include <stdio.h>

int main() {
    double array[10];
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }
    for(int i = 0; i < 10; i++) {
        printf("%.1f ", array[i]);
    }
    return 0;
}
