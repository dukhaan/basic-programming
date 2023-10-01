#include <stdio.h>
#include <stdlib.h>

int main()
{
    int harga;
    int diskon;

    printf("Masukkan harga barang : Rp ");
    scanf("%d",&harga);

    if (harga >= 100000){
        printf("\nSelamat anda mendapat diskon sebesar 5%%");
        diskon = harga * 0.05;

    }

    int totalharga = harga - diskon;
    printf("\n\nTotal harga barang yang anda harus bayar sebesar : Rp %d",totalharga);
    return 0;
}
