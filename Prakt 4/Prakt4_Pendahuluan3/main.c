#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;
    printf("Masukkan tiket yang ingin dibeli : ");
    scanf("%d",&angka);
    int pribadi = angka / 3;
    int bundle = angka % 3;
    int totaltiket = (pribadi * (2 * 50000)) + (bundle * 50000);
    printf("Total harga tiket yang harus di bayar adalah Rp%d",totaltiket);

    return 0;
}
