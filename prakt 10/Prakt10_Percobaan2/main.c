#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i='Y';
    int n = 1;
    int a;
    int total=0;

    while (i=='Y' || i=='y'){

        printf("Masukkan bilangan ke-%d : ",n);
        scanf("%d",&a);
        n++;
        fflush(stdin);
        printf("\nMau masukkan data lagi (Y|N) : ");
        scanf("%c",&i);
        total = total + a;
    }

    printf("\n\nTotal angka yang dimasukan adalah : %d",total);

    return 0;
}
