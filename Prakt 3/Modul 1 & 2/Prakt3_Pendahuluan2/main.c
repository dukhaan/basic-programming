#include <stdio.h>
#include <stdlib.h>

int main()
{

    int totaluang;
    int sisa;
    int seratus;
    int limapuluh;
    int duapuluh;
    int sepuluh;
    int lima;
    int dua;
    int seribu;

    printf("Masukkan uang yang ingin dihitung : ");
    scanf("%d",&totaluang);

    seratus = totaluang / 100000;
    sisa = totaluang - (seratus * 100000);
    limapuluh = sisa / 50000;
    sisa = sisa - (limapuluh * 50000);
    duapuluh = sisa / 20000;
    sisa = sisa - (duapuluh * 20000);
    sepuluh = sisa / 10000;
    sisa = sisa - (sepuluh * 10000);
    lima = sisa / 5000;
    sisa = sisa - (lima * 5000);
    dua = sisa / 2000;
    sisa = sisa - (dua * 2000);
    seribu = sisa / 1000;
    sisa = sisa - (seribu * 1000);

    printf("%d Lembar Uang 100 Ribu\n", seratus);
    printf("%d Lembar Uang 50 Ribu\n", limapuluh);
    printf("%d Lembar Uang 20 Ribu\n", duapuluh);
    printf("%d Lembar Uang 10 Ribu\n", sepuluh);
    printf("%d Lembar Uang 5 Ribu\n", lima);
    printf("%d Lembar Uang 2 Ribu\n", dua);
    printf("%d Lembar Uang Seribu\n", seribu);

    return 0;
}
