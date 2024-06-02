#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    time_t segundos = time(0);

    struct tm *tempo_local = localtime(&segundos);

    printf("epoch: %ld\n", (long)segundos);
    printf("hoje: %d/%d/%d\n",
           tempo_local->tm_mday,
           tempo_local->tm_mon + 1,
           tempo_local->tm_year + 1900);

    return 0;
}
