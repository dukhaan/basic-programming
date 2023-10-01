#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pilihan Hari yang tersedia : \n\n 1. Hari Minggu \n\n 2. Hari Senin \n\n 3. Hari Selasa \n\n 4. Hari Rabu \n\n 5. Hari Kamis \n\n 6. Hari Jumat \n\n 7. Hari Sabtu \n\n");

    int hari;
    printf("Masukkan hari yang ingin dipilih : ");
    scanf("%d",&hari);

    if (hari == 1)
        printf("\nHari yang dipilih adalah Hari Minggu.\n\n");
    else if (hari == 2)
        printf("\nHari yang dipilih adalah Hari Senin.\n\n");
    else if (hari == 3)
        printf("\nHari yang dipilih adalah Hari Selasa.\n\n");
    else if (hari == 4)
        printf("\nHari yang dipilih adalah Hari Rabu.\n\n");
    else if (hari == 5)
        printf("\nHari yang dipilih adalah Hari Kamis.\n\n");
    else if (hari == 6)
        printf("\nHari yang dipilih adalah Hari Jumat.\n\n");
    else if (hari == 7)
        printf("\nHari yang dipilih adalah Hari Sabtu.\n\n");
    else
        printf("\nERROR : Hari tidak valid, Silahkan mengulang program\n\n");


    return 0;
}
