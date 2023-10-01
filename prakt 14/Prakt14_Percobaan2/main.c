#include <stdio.h>
#include <stdlib.h>\

int faktorial(int);

int main()
{
    int n,total;
    printf("Masukkan n yang ingin di faktorial : ");
    scanf("%d",&n);

    total=faktorial(n);
    printf("Hasil faktorial dari %d adalah : %d",n,total);
    return 0;
}


int faktorial(int n){
    long int hasil=1;
    for (int i=1;i<=n;i++){
        hasil = hasil * i;
    }
    return hasil;
}
