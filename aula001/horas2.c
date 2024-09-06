#include <stdio.h>

#define PI 3.1415926

int main() {
    printf("digite o tempo em seg:");

    int t;
    scanf("%d", &t);

    int horas = t / 3600;
    t = t % 3600;

    int mins = t / 60;
    t = t % 60;

    int segs = t;

    printf("%d horas %dm %ds\n",
        horas, mins, segs);
    return 0;
}