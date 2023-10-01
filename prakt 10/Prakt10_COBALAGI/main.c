#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    float a;
    float b;
    float c;
    int waktu;
    float sisa;

    printf("Masukkan berapa biaya awal : ");
    scanf("%f",&a);

    printf("Berapa cicilan yang mampu dibayarkan tiap bulan : ");
    scanf("%f",&b);

    printf("Berapa rata-rata kenaikan tiap tahun (%%) : ");
    scanf("%f",&c);

    sisa = a;

    do{
        waktu++;
        sisa = sisa - b;
        if (waktu%12==0)
            sisa = sisa + (a * (c/100));
    }

    while (sisa > 0);
    printf("Waktu yang dibutuhkan untuk melunasi biaya haji adalah : %d bulan",waktu);
    */


    /* nmr 6
    int n;
    int a;
    int hasil=0;
    int temp;

    printf("Masukkan angka : ");
    scanf("%d",&n);


    while (n != 0){
        temp = n % 10;
        a = a + temp;
        n = n / 10;
    }


    printf("Total : %d",a);
    */

    /* nmr 5
    char i;
    int n;
    int spasi;
    int karakter=0;

    printf("Masukkan kalimat : ");

    while(i != '\n'){

        scanf("%c",&i);
        if (i == ' ')
            spasi++;
        else
            karakter++;
    }

    printf("\n\nJumlah karakter adalah : %d",karakter-1);
    printf("\nJumlah spasi adalah : %d\n",spasi);
    */


    /* nmr 4
    int i=0;
    int n;
    int a=1;

    printf("Masukkan angka ke-n : ");
    scanf("%d",&n);

    while (i<=n){
        printf("%d ",i);
        i=i+a;
        a++;
    }
    */

    /*nmr 3
    char i='Y';
    int n = 1;
    int a;
    int total=0;
    int max=0;
    int minimum;

    while (i=='Y' || i=='y'){

        printf("Masukkan bilangan ke-%d : ",n);
        scanf("%d",&a);
        n++;
        fflush(stdin);
        printf("\nMau masukkan data lagi (Y|N) : ");
        scanf("%c",&i);
        total = total + a;
        if (max <= a){
            max=a;
        } else minimum=a;
    }

    printf("\n\nTotal angka yang dimasukan adalah : %d",total);
    printf("\nNilai maksimum yang di dapat adalah : %d",max);
    printf("\nNilai minimum yang di dapat adalah : %d",minimum);
    /*

    /* nmr 2
    char i='Y';
    int n = 1;
    int a;
    int total=0;

    while (i=='Y' || i=='y'){

        printf("Masukkan bilangan ke-%d : ",n);
        scanf("%d",&a);
        n++;
        fflush(stdin);
        printf("\nMau masukkan data lagi (Y|N) : ");
        scanf("%c",&i);
        total = total + a;
    }

    printf("\n\nTotal angka yang dimasukan adalah : %d",total);
    */

    //cara lain nomor 1 menggunakan break function
    /*
    char i;
    char n;

    printf("Masukkan 1 karakter bebas : ");



    while (i != 'X'){

        scanf("%c",&n);
        if (n == 'x')
            break;
    }
    /*

    /* nmr 1
    char i;

    printf("Masukkan 1 karakter bebas : ");


    while (i != 'X' && i != 'x'){
        i=getchar();
    }
    */



    return 0;
}
