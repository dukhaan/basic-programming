#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tanggal,bulan,tahun,tgl,bln,thn;
    char jawab;

    printf("masukkan bulan dan tanggal : ");
    scanf("%d%d",&bulan,&tanggal);

    //bintang


    if (bulan == 1 && tanggal >= 1)
        printf("\nBintang anda Aquarius");

    else if (bulan == 2 && tanggal <= 18)
        printf("Bintang anda Aquarius");

    else if (bulan == 2 && tanggal >= 19 )
        printf("Bintang anda Pisces");

    else if (bulan == 3 && tanggal <= 20 )
        printf("Bintang anda Pisces");

    else if (bulan == 3 && tanggal >= 21 )
        printf("Bintang anda Aries");

    else if (bulan == 4 && tanggal <= 19 )
        printf("Bintang anda Aries");

    else if (bulan == 3 && tanggal >= 20 )
        printf("Bintang anda Taurus");

    else if (bulan == 4 && tanggal <= 20 )
        printf("Bintang anda Taurus");

    else if (bulan == 3 && tanggal >= 21 )
        printf("Bintang anda Gemini");

    else if (bulan == 4 && tanggal <= 20 )
        printf("Bintang anda Gemini");

    else if (bulan == 3 && tanggal <= 30 )
        printf("Bintang anda Pisces");
    else if (bulan == 3 && tanggal <= 30 )
        printf("Bintang anda Pisces");





    return 0;
}
