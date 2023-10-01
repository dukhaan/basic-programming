#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x;

    printf("Masukkan angka untuk mengisi x : ");
    scanf("%f",&x);

    float rumus = 3 * x * x - 5 * x + 6;
    printf("Hasil yang didapat dari 3x^2 - 5x + 6x adalah : %0.00f",rumus);

    return 0;
}
