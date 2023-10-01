#include <stdio.h>
#include <stdlib.h>


int main()
{
    char n;
    int spasi=0,karakter=0,kecil=0,besar=0,angka=0;

    printf("Masukkan kalimat sembarang : ");
    while (n != '\n'){
        n = getchar();
        if (n == ' '){
            spasi++;
        }
         if (n >= 97 && n <= 122){
            kecil++;
        }
         if (n >= 65 && n <= 90){
            besar++;
        }
         if (n >= 49 && n <= 57){
            angka++;
        } if (n >= 00 && n <= 255){
            karakter++;
        }
    }
    printf("Jumlah Karakter : %d",karakter-2);
    printf("\nJumlah Spasi : %d",spasi);
    printf("\nJumlah Huruf Besar : %d",besar);
    printf("\nJumlah Huruf Kecil : %d",kecil);
    printf("\nJumlah angka : %d",angka);


    /*
    float a,b,c,sisa;
    int bulan=0;

    printf("Masukkan biaya awal : ");
    scanf("%f",&a);
    fflush(stdin);
    printf("Cicilan yang mampu dibayar tiap bulan : ");
    scanf("%f",&b);
    fflush(stdin);
    printf("Rata rata yang kenaikan tiap tahun (%%) : ");
    scanf("%f",&c);
    fflush(stdin);
    sisa = a;

    do{
        bulan++;
        sisa = sisa - b;
        if (bulan % 12 == 0){
            sisa = sisa + (a * (c/100));
        }
    } while (sisa != 0);
    printf("Waktu yang dibutuhkan adalah : %d bulan",bulan);
    */

    /* nmr 6
    int n,tampung=0,hasil=0;
    printf("Masukkan angka : ");
    scanf("%d",&n);

    while (n!=0){
        tampung = n % 10;
        hasil += tampung;
        n = n / 10;
    }
    printf("Total : %d",hasil);
    */

    /* nmr 5
    char n;
    int spasi=0,karakter=0;

    printf("Masukkan kalimat sembarang : ");
    while (n != '\n'){
        n = getchar();
        if (n == ' '){
            spasi++;
        } else karakter++;
    }
    printf("Jumlah Karakter : %d",karakter-1);
    printf("\nJunlah Spasi : %d",spasi);
    */

    /* nmr 4
    int n,i=1,total=0;
    scanf("%d",&n);
    while (i<=n){
        printf("%d ",total);
        total += i;
        i++;
    }
    */

    /* nmr 3
    char n;
    int m,hasil=0,i=1,min=0,max=0;
    float rerata=0;
    while (n != 't'){
        printf("Masukkan bilangan ke - %d : ",i);
        scanf("%d",&m);
        fflush(stdin);
        hasil += m;
        rerata = hasil/i;
        printf("Mau memasukkan data lagi [y/t] : ");
        n = getchar();
        fflush(stdin);
        i++;
        if(max < m || max == 0){
            max = m;
        }
        if (min > m || min == 0){
            min = m;
        }
    }
    printf("Total bilangan : %d",hasil);
    printf("\nNilai rata rata : %g",rerata);
    printf("\nNilai Maksimum : %d",max);
    printf("\nNilai Minimum : %d",min);
    */

    /* nmr 2
    char n;
    int m,hasil=0,i=0;;
    while (n != 't'){
        i++;
        printf("Masukkan bilangan ke - %d : ",i);
        scanf("%d",&m);
        fflush(stdin);
        hasil += m;
        printf("Mau memasukkan data lagi [y/t] : ");
        n = getchar();
        fflush(stdin);
    }
    printf("Total bilangan : %d",hasil);
    */

    /* nmr 1
    char n;

    while (n != 'X' && n != 'x'){
        n = getchar();
    }
    */
    return 0;
}
