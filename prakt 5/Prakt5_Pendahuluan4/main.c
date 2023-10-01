#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf("Masukkan 1 angka : ");
    scanf("%d",&a);
    printf("Masukkan 1 angka lagi : ");
    scanf("%d",&b);
    int modulo = a % b;

    if (modulo == 0){

        printf("\nBilangan %d",a);
        printf(" adalah kelipatan persekutuan");
        printf(" bilangan %d\n",b);

    }else {
        printf("\nBilangan %d",a);
        printf(" bukan kelipatan persekutuan");
        printf(" bilangan %d\n",b);
    }

    return 0;
}
