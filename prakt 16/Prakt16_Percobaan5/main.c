#include <stdio.h>
#include <stdlib.h>

float masukkan(int);
float average(int,float);

int main()
{
    int n;
    float masuk,avg,total;
    printf("Masukkan jumlah data yang akan di inputkan : ");
    scanf("%d",&n);
    printf("\n");
    masuk = masukkan(n);
    avg = average(n,masuk);
    printf("\nTotal dari Data yang dimasukkan : %g",masuk);
    printf("\nNilai Rata - Rata dari seluruh Data : %g\n",avg);
    return 0;
}

float masukkan(int n){
    int i;
    float total=0,angka;
    for (i=1;i<=n;i++){
        printf("data ke-%d = ",i);
        scanf("%f",&angka);
        total += angka;
    }
    return total;
}

float average(int n,float total){
    float rerata=0;
    rerata = total/n;
    return rerata;
}
