#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;
    float d;

    printf("masukan nilai a : ");
    scanf("%f",&a);
    printf("masukan nilai b : ");
    scanf("%f",&b);
    printf("masukan nilai c : ");
    scanf("%f",&c);

    d = b * b - 4 * a * c;
    printf("Nilai diskriminan = %0.00f\n",d);

    return 0;
}
