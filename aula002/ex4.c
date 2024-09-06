#include <stdio.h>

int main() {

    int reais;
    scanf("%d", &reais);

    int n50 = reais / 50;
    reais = reais % 50;
    printf("n50=%d, r=%d\n",
        n50, reais);

    int n20 = reais / 20;
    reais = reais % 20;
    printf("n20=%d, r=%d\n",
        n20, reais);

    int n10 = reais / 10;
    reais = reais % 10;
    printf("n10=%d, r=%d\n",
        n10, reais);

    int n5 = reais / 5;
    reais = reais % 5;
    printf("n5=%d, r=%d\n",
        n5, reais);

    int n2 = reais / 2;
    reais = reais % 2;
    printf("n2=%d, r=%d\n",
        n2, reais);

    int n1 = reais;
    printf("n1=%d, r=%d\n",
        n1, reais);

    return 0;
}