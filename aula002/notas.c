#include <stdio.h>

int main() {

    double nota;
    scanf("%lf", &nota);

    {
      if (!(0 <= nota && nota <= 10)) {
        printf("nota invalida\n");
        return 1;
      }
    }

    if (9.0 <= nota) {
        printf("A\n");
    } else if (8.0 <= nota) {
        printf("B\n");
    } else if (7.0 <= nota) {
        printf("C\n");
    } else {
        printf("F\n");
    }

    return 0;
}