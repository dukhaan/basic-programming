#include <stdio.h>
#include <stdlib.h>

float kuadrat(float n);

int main()
{

    float n;
    float hasil;

    printf("Masukkan angka yang ingin dikuadratkan : ");
    scanf("%f",&n);
    hasil = kuadrat(n);
    printf("Hasil kuadrat dari %g adalah = %g",n,hasil);
    return 0;
}

float kuadrat(float n){
    float hasil;
    hasil = n*n;
    return hasil;
}
