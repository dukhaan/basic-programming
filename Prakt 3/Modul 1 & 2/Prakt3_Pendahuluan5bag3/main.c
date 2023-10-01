#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
        float a=12;
        float b=2;
        float c=3;
        float d=4;

    printf("Hasil dari a %% b = %0.00f \n", fmod(a,b));
    printf("Hasil dari a - c = %0.00f \n", a-c);
    printf("Hasil dari a + b = %0.00f \n", a+d);
    printf("Hasil dari a / d = %0.00f \n", a/d);
    printf("Hasil dari a / d * d + a %% d = %0.00f \n", a/d*d+fmod(a,b));
    printf("Hasil dari a %% d / d * a - c = %0.00f \n", fmod(a,d)/d*a-c);

    return 0;
}
