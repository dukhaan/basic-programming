#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;

    printf("Masukkan angka pertama : " );
    scanf("%f",&a);
    printf("Masukkan angka kedua : " );
    scanf("%f",&b);

    float pembagian = a/b;

    if (b != 0){

        printf("\nHasil pembagian angka %0.00f",a);
        printf(" dan %0.00f",b );
        printf(" adalah : %0.3f\n",pembagian);

    } else printf("ERROR : Division by zero\n ");

    return 0;
}
