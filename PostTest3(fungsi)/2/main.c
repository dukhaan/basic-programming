#include <stdio.h>
#include <stdlib.h>

int carikpk(int, int);
int carifpb(int, int);
int a,b,kpk;

int main()
{
    printf("Masukkan nilai a : ");
    scanf("%d",&a);
    printf("Masukkan nilai b : ");
    scanf("%d",&b);
    carifpb(a,b);
    kpk=carikpk(a,b);
    printf("Hasil : %d",kpk);
    return 0;
}

int carifpb(int a, int b){
     int i=0;
     if (a > b){
      i = a;
      a = b;
      b = i;
     }
      while (a > 0){
       i = b % a;
       b = a;
       a = i;
    }
    return b;
}

int carikpk(int a,int b){
    int hasil=0;
    hasil = (a*b) / carifpb(a,b);
    return hasil;
}



