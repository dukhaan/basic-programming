#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=1;
    int n;
    int j = 0;
    int prima = 0;

    printf("Masukkan angka : ");
    scanf ("%d",&n);

    for (i;i<=n;i++){
        if (n%i == 0){
            prima = prima + 1 ;
        }
    }
        if (prima == 2){
        printf("\nBilangan ini prima\n\n");
        } else printf("\nBilangan ini bukan prima\n\n");



    /*
    int i=1;
    int n;
    printf("Masukkan bilangan : ");
    scanf("%d",&n);

    for (i;i<=n;i++){
        if (i % 2 == 0){
            printf("-%d ",i);
        } else printf("%d ",i);
    }
    printf("\n");
    */

    /*
    char z;
    char a = 'A';


    for(z=90;a<=z;z--){
        printf("%c\n",z);
    }
    */

/*
    int i=0;
    int n;
    int z;
    int penampung=0;

    printf("Masukkan angka : ");
    scanf("%d",&n);

    for (i ; i<=n ; i++){
        penampung += i;         //penampung itu bisa penampung += i, bisa penampung++ tergantung sikon. pakai += karena i yang ditampung

    }

    printf("%d ",penampung);

*/

    /*
    int i;
    int n;
    printf("Masukkan angka : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        if(i%2 != 0){
            printf("%d  ",i);
        }
    }
    */


    return 0;
}
