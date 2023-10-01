#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    int i;
    int a[200];
    int *hasil=a;

    printf("Masukkan Berapa bilangan ditampilkan  : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        if (i == 0 || i == 1){
            printf("%d ",*hasil = 1);
            hasil = hasil + 1;
            continue;
        }

        *hasil = (6 * *(hasil - 1)) + (9 * *(hasil - 2)) ;

    printf("%d ",*hasil);

    hasil++;
    }

    return 0;
}
