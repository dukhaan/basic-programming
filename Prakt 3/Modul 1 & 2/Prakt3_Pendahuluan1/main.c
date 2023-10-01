#include <stdio.h>
#include <stdlib.h>

int main()
{
    int usd;
    printf("Masukkan uang dollar : ");
    scanf("%d", &usd);

    int rupiah = usd * 14854;
    printf("Uang yang telah di konversi adalah : Rp %d",rupiah);
    return 0;
}
