#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;

    printf("Masukkan nilai Pertama : ");
    scanf("%f", &a);
    printf("masukkan nilai Kedua : ");
    scanf("%f", &b);

    printf("\n Jumlah bilangan Pertama dan Kedua = %f\n", a + b);
    printf("Rata Rata kedua bilangan = %f\n",(a + b) / 2);
    printf("Pangkat Kuadrat bilangan Pertama = %f\n",a*a);
    printf("Pangkat kuadrat bilangan Kedua = %f\n",b*b);

    return 0;
}
