#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celcius;
    printf("Masukan suhu dalam Celcius : ");
    scanf("%f",&celcius);

    float fahrenheit = celcius * 1.8 + 32;
    printf("Suhu setelah di konversi dari %0.00f derajat celcius ke Fahrenheit adalah %f",celcius,fahrenheit);

    return 0;
}
