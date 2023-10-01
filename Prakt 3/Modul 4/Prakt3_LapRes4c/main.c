#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, x, z, y;
    printf("Masukkan bilangan a : ");
    scanf("%f", &a);
    printf("Masukkan bilangan b : ");
    scanf("%f", &b);
    printf("Masukkan bilangan c : ");
    scanf("%f", &c);
    printf("Masukkan bilangan x : ");
    scanf("%f", &x);
    printf("Masukkan bilangan z : ");
    scanf("%f", &z);

    y = (b * x * x) + (0.5 * x) - c;
    printf("hasil bx^2 + 0,5x - c adalah %.2f\n", y);

    y = (0.3 * x * z) / (2 * a);
    printf("hasil 0,3xz / 2a adalah %.2f\n", y);

    return 0;
}
