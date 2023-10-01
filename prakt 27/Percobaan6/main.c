#include <stdio.h>
#include <stdlib.h>

void rotasi(int *, int *, int *);

int main()
{
    int a, b, c;
    printf("Masukkan bilangan a : ");
    scanf("%d",&a);
    fflush(stdin);
    printf("Masukkan bilangan b : ");
    scanf("%d",&b);
    fflush(stdin);
    printf("Masukkan bilangan c : ");
    scanf("%d",&c);
    fflush(stdin);
    printf("\nNilai sebelum di rotasi A = %d, B = %d, C = %d\n", a, b, c);
    rotasi(&a,&b,&c);
    printf("\nNilai setelah di rotasi A = %d, B = %d, C = %d\n", a, b, c);
    return 0;
}
void rotasi(int *x, int *y, int *z)
{
    int temp;
    temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}
