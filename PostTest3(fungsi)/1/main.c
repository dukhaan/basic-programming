#include <stdio.h>
#include <stdlib.h>

int jumbilganjil(int);
int jumbilgenap(int);

int main()
{
    int n,genap,ganjil;
    printf("Masukkan n : ");
    scanf("%d",&n);
    printf("\n Ganjil : %d",jumbilganjil(n));
    printf("\n Genap : %d",jumbilgenap(n));
    return 0;
}

int jumbilgenap(int n){
    int i,hasil=0;
    for (i=0;i<=n;i+=2){
        hasil = hasil + i;
    }
    return hasil;
}

int jumbilganjil(int n){
    int i,hasil=0;
    for (i=1;i<=n;i+=2){
        hasil = hasil + i;
    }
    return hasil;
}
