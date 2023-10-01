#include <stdio.h>
#include <stdlib.h>

int naik(int,int);

int main()
{
    int a,b;
    printf("Masukkan nilai a : ");
    scanf("%d",&a);
    printf ("Masukkan nilai b : ");
    scanf("%d",&b);

    printf ("Nilai sebelum dinaikkan adalah %d dan %d",a,b);
    naik(a,b);
    return 0;
}

naik(int x,int y){
    x += 2;
    y += 2;
    printf("\nNilai setelah dinaikkan adalah %d dan %d",x,y);
}
