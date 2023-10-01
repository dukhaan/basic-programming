#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PHI 3.14159F

float sisi(float,float);

int main()
{
    float bac,ab,bc;
    printf("Masukkan sudut BAC (Meter) : ");
    scanf("%f",&bac);
    printf("Masukkan sudut AB (Meter) : ");
    scanf("%f",&ab);
    bc = sisi(bac,ab);
    printf("Hasil daripada sudut BC adalah : %g ",bc);
    return 0;
}

float sisi(float bac,float ab){
    float rad, hasilbc;
    rad = (bac / 180) * PHI;
    hasilbc = tan(rad) * ab;
    return hasilbc;

}
