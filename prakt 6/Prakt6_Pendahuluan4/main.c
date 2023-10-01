#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nilai;
    printf("Masukkan nilai yang ingin diperiksa : ");
    scanf("%f",&nilai);

    if (nilai <= 40)
        printf("\nNilai menunjukkan angka %0.0f, Nilai yang anda dapatkan : E\n\n",nilai);
    else if (nilai > 40 && nilai <= 55)
        printf("\nNilai menunjukkan angka %0.0f, Nilai yang anda dapatkan : D\n\n",nilai);
    else if (nilai > 55 && nilai <= 60)
        printf("\nNilai menunjukkan angka %0.0f, Nilai yang anda dapatkan : C\n\n",nilai);
    else if (nilai > 60 && nilai <= 80)
        printf("\nNilai menunjukkan angka %0.0f, Nilai yang anda dapatkan : B\n\n",nilai);
    else if (nilai > 80 && nilai <= 100)
        printf("\nNilai menunjukkan angka %0.0f, Nilai yang anda dapatkan : A\n\n",nilai);

    return 0;
}
