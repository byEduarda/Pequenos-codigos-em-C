#include <stdio.h>

int main() {

    double nota;
    scanf("%lf", &nota);

    int a = (0 <= nota);
    int b = (nota <= 10);
    printf("%d %d\n", a, b);

    if (!(0 <= nota && nota <= 10)) {
        printf("nota invalida\n");
        return 1;
    }

    if (nota >= 9.0) {
        printf("A\n");
    } else {
        if (nota >= 8.0) {
            printf("B\n");
        } else {
            if (nota >= 7.0) {
                printf("C\n");
            } else {
                printf("F\n");
            }
        }
    }
}