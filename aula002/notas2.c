#include <stdio.h>

int main() {

    double nota;
    scanf("%lf", &nota);

    if (!(0 <= nota && nota <= 10)) {
        printf("nota invalida\n");
        return 1;
    }

    if (9.0 <= nota) {
        printf("A\n");
    }

    if (8.0 <= nota && nota < 9.0) {
        printf("B\n");
    }

    if (7.0 <= nota && nota < 8.0) {
        printf("C\n");
    }

    if (nota < 7.0) {
        printf("F\n");
    }

    return 0;
}