#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n,angka,tabung;
    printf("Masukkan angka : ");
    scanf("%d",&n);

    while (n!=0){
        angka = n % 10;
        n = n /10;
        printf("%d",angka);
    }


    /*int i,j,n,hasil=1;
    printf("Masukkan n : ");
    scanf("%d",&n);

    for (i=0;i<=n;i++){
        for (j=0;j<i;j++){
            printf("%d ",hasil);
            hasil++;
        }
        printf("\n");
    }
    */
/*
    int n,m,r;

    printf("Masukkan nilai n : ");
    scanf("%d",&n);
    printf("Masukkan nilai m : ");
    scanf("%d",&m);

    if (n>m){
        int temp = m;
        m=n;
        n=temp;
    }

    while (n>0){
        r=m%n;
        m=n;
        n=r;
    }
    printf("Nilai KPK : %d",m);

    */

    return 0;
}
