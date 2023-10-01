#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hari;
    printf("Masukkan kode hari : ");
    scanf("%d",&hari);

    switch(hari){

        case 1 : printf("\nKode yang dipilih adalah %d\nHari yang didapat adalah hari Minggu.\n\n",hari);
            break;
        case 2 : printf("\nKode yang dipilih adalah %d\nHari yang didapat adalah hari Senin.\n\n",hari);
            break;
        case 3 : printf("\nKode yang dipilih adalah %d\nHari yang didapat adalah hari Selasa.\n\n",hari);
            break;
        case 4 : printf("\nKode yang dipilih adalah %d\nHari yang didapat adalah hari Rabu.\n\n",hari);
            break;
        case 5 : printf("\nKode yang dipilih adalah %d\nHari yang didapat adalah hari Kamis.\n\n",hari);
            break;
        case 6 : printf("\nKode yang dipilih adalah %d\nHari yang didapat adalah hari Jumat.\n\n",hari);
            break;
        case 7 : printf("\nKode yang dipilih adalah %d\nHari yang didapat adalah hari Sabtu.\n\n",hari);
            break;

        default : printf("\nHari yang anda masukkan salah.\n\n");
            break;
    }

    return 0;
}
