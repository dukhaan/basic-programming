#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float a;
    float b;
    float c;
    float d;
    int waktu;
    float sisa;


    printf("Masukkan berapa biaya awal : ");
    scanf("%f",&a);

    printf("Berapa cicilan yang mampu dibayarkan tiap bulan : ");
    scanf("%f",&b);

    printf("Berapa rata-rata kenaikan tiap tahun (%%) : ");
    scanf("%f",&c);

    printf("Berapa bonus gaji / 6 bulan : ");
    scanf("%f",&d);

    sisa = a;

    do{
        waktu++;
        sisa = sisa - b;
        if (waktu%12==0)
            sisa = sisa + (a * (c/100));
        if (waktu%6==0)
            sisa = sisa - d;
    }
    while (sisa > 0);

    printf("Waktu yang dibutuhkan untuk melunasi biaya haji adalah : %d bulan",waktu);
    return 0;
}
