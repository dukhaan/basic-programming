#include <stdio.h>
#include <stdlib.h>

void urut(int,int);

int main()
{
    int a,b;
    printf("Masukkan angka pertama : ");
    scanf("%d",&a);
    printf("Masukkan angka kedua : ");
    scanf("%d",&b);

    printf("Angka sebelum di urutkan : %d dan %d",a,b);
    urut(&a,&b);
    return 0;
}

//x = a  --  y = b
urut(int *px,int *py){
    int z;

    if (*py>*px){
        z=*px;
      *px=*py;
      *py=z;
    }
    printf("\nNilai sesudah diurutkan  : %d dan %d",*px,*py);
}
