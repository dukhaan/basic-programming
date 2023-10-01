#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, angka = 0, j,n;
    printf("Masukkan angka : ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        for(j = 1, angka = 0; j < i; j++){
            if(i % j == 0)
            angka = angka + j;
        }
        if(angka == i)
        printf("%d ", i);
    }

  return 0;
}
