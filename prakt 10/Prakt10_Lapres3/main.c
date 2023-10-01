#include <stdio.h>

int main(){
    char kar ;
    int jumspasi = 0 , jumkapital = 0 , jumkecil = 0 , jumangka = 0 ;
    printf ( "Masukkan kalimat bebas = " );
    do {
        scanf ("%c",&kar);
        if (kar==' ')
            jumspasi++;
        else if (kar<= 90&&kar>=65)
            jumkapital++;
        else if (kar<=122 && kar>=97)
            jumkecil++;
        else if ( kar <= 57 && kar >= 48 )
            jumangka++;
   }

   while(kar != '\n' );
        printf ( " \nJumlah semua karakter \t = %d " , jumspasi + jumkapital + jumkecil + jumangka ) ;
        printf ( " \nJumlah karakter spasi \t = %d " , jumspasi ) ;
        printf ( " \nJumlah karakter kapital = %d " , jumkapital ) ;
        printf ( " \nJumlah karakter kecil \t = %d " , jumkecil ) ;
        printf ( " \nJumlah karakter angka \t = %d " , jumangka ) ;

}
