#include <stdio.h>
#include <stdlib.h>

int prima(int);

int main()
{
    int n,total;
    printf("Masukkan angka n : ");
    scanf("%d",&n);

    total = prima(n);
    if (total == 1){
        printf("Angka %d adalah angka prima",n);
    }
    if (total == 0){
        printf("Angka %d bukan angka prima",n);
    }

    return 0;
}

int prima(int n){
    int faktor=0,hasil=0;
    for (int i=1;i<=n;i++){
        if(n%i == 0){
            faktor++;
        }
    }
    if (faktor <= 2){
        hasil=1;
    } else hasil = 0;

    return hasil;
}
