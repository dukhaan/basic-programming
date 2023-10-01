#include <stdio.h>
#include <stdlib.h>


    /*
    //nomor 1
    printf("Nomor 1 \n");


    printf("Nama  : Dukhaan Kamimpangan \n");
    printf("Kelas : 1D4A \n");
    printf("NRP   : 4220440326 \n");
    */

    /*
    //nomor 2
    printf("\nNomor 2 \n");

    int a = 1024;
    int b = 4096;
    int hasil = a + b;
    printf("Hasil penjumlahan dari = %d + %d = %d",a,b,hasil);

*/
    //nomor 3
/*
    printf("\n\nNomor 3 \n");
    int c;
    int d;


    printf("Masukkan angka : ");
    scanf("%d",&c);

    printf("Masukkan Angka lagi : ");
    scanf("%d",&d);

    int hasil2 = c+d;

    printf("Hasil hitungan anda : %d  ",hasil2);
*/

//nomor 4
/*
    printf("\n\nNomor 4 \n");

    float e;
    float f = 50;

    printf("Masukkan nilai yang ingin dikalikan 50 : ");
    scanf("%f", &e);

    float hasil3 = e*f;
    printf("Hasil hitungan anda adalah %f",hasil3);

/*
//nomor 5
*/
/*
    printf("\n\nNomor 5 \n");

    float g;

    printf("Masukkan bilangan float: ");
    scanf("%f", &g);

    printf("\nHasil bilangan default: %f", g);

/*

*/
//nomor 6
/*
    printf("\n\nNomor 6\n");

    int h;
    char i;

    printf("Masukkan satu bilangan bulat dan satu karakter : ");
    scanf("%d %c", &h, &i);

    printf("Hasil bilangan bulat: %d \nHasil 1 karakter: %c", h, i);

    printf("\n\nTerimakasih\n");

*/


int main()
{

/*
    float a, b, c;
        a = 3;
        b = 4.0;
        c = a * a + b * b;
    printf("c * c = %f", c);
*/


    float a;
    float b;

    printf("Masukkan nilai Pertama : ");
    scanf("%f", &a);
    printf("masukkan nilai Kedua : ");
    scanf("%f", &b);

    printf("\n Jumlah bilangan Pertama dan Kedua = %f\n", a + b);
    printf("Rata Rata kedua bilangan = %f\n",(a + b) / 2);
    printf("Pangkat Kuadrat bilangan Pertama = %f\n",a*a);
    printf("Pangkat kuadrat bilangan Kedua = %f\n",b*b);
    return 0;
}
