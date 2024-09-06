#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);

    int m = a;
    if (b > m) { m = b; }
    if (c > m) { m = c; }

    printf("maior é: %d\n", m);
    return 0;
}