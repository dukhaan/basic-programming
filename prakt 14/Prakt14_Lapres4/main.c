#include <stdio.h>
#include <stdlib.h>
int validasi(int,int,int);

int main()
{
    int tanggal, bulan, tahun, validas;
    printf("Masukkan tanggal : ");
    scanf("%d",&tanggal);
    printf("Masukkan bulan (angka) : ");
    scanf("%d",&bulan);
    printf("Masukkan tahun : ");
    scanf("%d",&tahun);

    validas = validasi(tanggal,bulan,tahun);

    if(validas)
        printf("Tanggal tersebut valid");
    else
        printf("Tanggal tersebut tidak valid");
    return 0;
}

int validasi(int tgl,int bln ,int thn)
{
    int jumhari,valid=0;

    switch(bln)
    {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
            jumhari=31; break;
        case 4 : case 6 : case 9 : case 11 :
            jumhari=30; break;
        case 2 :
            {
            if(thn%400==0)
                jumhari=29;
            else if(thn%100==0 && thn%4==0)
                jumhari=28;
            else if(thn%4==0)
                jumhari=29;
            else
                jumhari=28;
            break;
            }
    }
    if(bln>=1 && bln<=12 && tgl>=1 && tgl<=jumhari)
        valid=1;
    return valid;
}
