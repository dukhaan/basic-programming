#include <stdio.h>
#include <stdlib.h>

float konversi(float,char,char);

int main()
{
    float n,total;
    char asal,tujuan;
    printf("Masukkan suhu sumber : ");
    scanf("%f",&n);
    fflush(stdin);
    printf("Masukkan suhu sumber : ");
    asal=getchar();
    fflush(stdin);
    printf("Masukkan satuan tujuan : ");
    tujuan=getchar();
    fflush(stdin);

    total = konversi(n,asal,tujuan);
    printf("Hasil Konversi Suhu %g %c = %g %c",n,asal,total,tujuan);
    return 0;
}

float konversi(float n,char asal,char tujuan){
    float pembandingasal,pembandingtujuan,suhuawalasal,suhuawaltujuan,suhu;

    switch(asal){
        case 'C': pembandingasal = 5; suhuawalasal = 0;
        break;
        case 'R': pembandingasal = 4; suhuawalasal = 0;
        break;
        case 'F': pembandingasal = 9; suhuawalasal = 32;
        break;
    }

    switch(tujuan){
        case 'C': pembandingtujuan = 5; suhuawaltujuan = 0;
        break;
        case 'R': pembandingtujuan = 4; suhuawaltujuan = 0;
        break;
        case 'F': pembandingtujuan = 9; suhuawaltujuan = 32;
        break;
    }

    suhu = (pembandingtujuan/pembandingasal) * (n - suhuawalasal) + suhuawaltujuan;
    return suhu;

}
