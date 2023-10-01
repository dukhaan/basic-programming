#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    int sisi;
    int jari;
    int TS;

    printf("Menu : \n\n1. Menghitung volume kubus.\n\n2. Menghitung luas lingkaran.\n\n3. Menghitung volume silinder.\n\n");
    printf("Pilih menu : ");
    scanf("%d",&menu);

    switch(menu){
        case 1 :

        printf("\nMasukkan panjang sisi kubus : ");
        scanf("%d",&sisi);

        printf("Volume kubus adalah : %d",sisi*sisi*sisi);
        break;

        case 2 :

        printf("\nMasukkan panjang jari jari lingkaran : ");
        scanf("%d",&jari);

        printf("Luas lingkaran adalah : %0.2f", 3.14 * (jari * jari));
        break;

        case 3 :

        printf("\nMasukkan panjang jari jari lingkaran : ");
        scanf("%d",&jari);

        printf("Masukkan tinggi silinder : ");
        scanf("%d",&TS);

        printf("\nVolume silinder adalah : %0.2f\n\n", 3.14 * (jari * jari) * TS);
        break;

        default : printf("\nMenu yang anda masukkan salah\n\n");
    }

    return 0;
}
