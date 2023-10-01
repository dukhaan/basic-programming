#include <stdio.h>
#include <stdlib.h>

int ganjil(int);

int main()
{
    int n,jumlah,hasil;
    printf("Masukkan angka : ");
    scanf("%d",&n);

    hasil=ganjil(n);

    if (hasil == 0){
        printf("Genap");
    }else printf("Ganjil");


    return 0;
}

int ganjil(int n){
    int jumlah;

    if (n%2 == 0){
        jumlah = 0;
    }
    else jumlah = 1;

    return jumlah;
}

