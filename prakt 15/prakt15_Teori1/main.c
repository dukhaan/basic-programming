#include <stdio.h>
#include <stdlib.h>

void tukar(int *px,int *py);

int main()
{
    int n,m;

    printf("Masukkan n dan m : ");
    scanf("%d %d",&n,&m);
    tukar(&n,&m);
    //printf("\nNilai Setelah fungsi tukar");
    //printf("\nn = %d , m = %d",n,m);

    return 0;
}

tukar(int *x, int *y){
    int z;

    z  = *x;
    *x = *y;
    *y = z;

    printf("\nNilai setelah di tukar menggunakan fungsi tukar()");
    printf("\nn = %d, m = %d\n\n",*x,*y);
}
