#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);

    int m = a;
    m = (b > m ? b : m);
    m = (c > m ? c : m);

    printf("maior é: %d\n", m);
    return 0;
}