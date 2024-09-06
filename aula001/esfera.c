#include <stdio.h>

#define PI 3.1415926

int main() {
    float r;
    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    float v = 4.0/3.0*PI*r*r*r;
    printf("Resultado: %f\n", v);
    return 0;
}
