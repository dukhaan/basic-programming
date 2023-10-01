#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("SELAMAT DATANG DI KALKULATOR SEDERHANA\n\n");

    float a;
    float b;

    printf("Masukkan angka pertama : ");
    scanf("%f",&a);
    printf("Masukkan angka kedua : ");
    scanf("%f",&b);

    printf("\n\nMENU OPERATOR SILAHKAN DIPILIH \n\n 1. Penjumlahan \n\n 2. Pengurangan \n\n 3. Pembagian \n\n 4. Perkalian");

    float oprator;
    printf("\n\n Masukkan pilihan anda : ");
    scanf("%f",&oprator);

    float tambah = a + b;
    float kurang = a - b;
    float bagi = a / b;
    float kali = a * b;

    if (oprator == 1)
        printf("\nHasil penjumlahan antara %0.0f dan %0.0f adalah %0.0f\n\n", a,b,tambah);


    else if (oprator == 2)
        printf("\nHasil pengurangan antara %0.0f dan %0.0f adalah %0.0f\n\n",a,b,kurang);

    else if (oprator == 3)
        printf("\nHasil pembagian antara %0.0f dan %0.0f adalah %0.2f\n\n",a,b,bagi);

    else if (oprator == 4)
        printf("\nHasil perkalian antara %0.0f dan %0.0f adalah %0.0f\n\n",a,b,kali);


    else if (oprator > 4)
        printf("\n\nMaaf operator yang anda masukkan kurang tepat\n\n");


    return 0;
}
