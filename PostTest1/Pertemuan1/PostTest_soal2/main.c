#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dancow,bendera,sgm;
    char besar,sedang,kecil;
    int produk,ukuran;

    printf("Menu\n 1. Dancow \n\n 2. Bendera \n\n 3. SGM\n");
    printf("Masukkan produk yang ingin dibeli : ");
    scanf("%d",&produk);
    fflush(stdin);

    printf("Menu Ukuran\n a. Besar \n\n b. Sedang\n\n c. Kecil\n");
    printf("Masukkan ukuran : ");
    scanf("%c",&ukuran);

    switch(produk){
    case 1 : dancow;
    break;
    case 2 : bendera;
    break;
    case 3 : sgm;
    break;
    }

    switch(ukuran){
    case 'a' : besar;
    break;
    case 'b' : sedang;
    break;
    case 'c' : kecil;
    break;
    }

    if (produk == 1 && ukuran == 'a'){
        printf("Dancow besar = 25000");
    }
    else if (produk == 1 && ukuran == 'b'){
        printf("Dancow Sedang = 20000");
    }
    else if (produk == 1 && ukuran == 'c'){
        printf("Dancow kecil = 15000");
    }


    return 0;
}
