#include <stdio.h>
#include <stdlib.h>

int faktorial(int);
int kombinasi(int,int);
int permutasi(int,int);

int main()
{
    int r,n;
    printf("Masukkan n : ");
    scanf("%d",&n);
    printf("Masukkan r : ");
    scanf("%d",&r);
    permutasi(n,r);
    kombinasi(n,r);

    return 0;
}

faktorial(int n){
    int total=1;
    for (int i=n;i>0;i--){
        total = total*i;
    }
    return total;
}

permutasi(int n,int r){
    int hasilpm;
    hasilpm = faktorial(n)/faktorial(n-r);
    printf("Hasil permutasi : %d",hasilpm);
}

kombinasi(int n,int r){
    int hasilkb;
    hasilkb = faktorial(n) / (faktorial(r) * (faktorial(n-r)));
    printf("\nHasil kombinasi : %d",hasilkb);

}
