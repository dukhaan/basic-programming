#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int j;

    printf("Masukan angka : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        for (j=1;j<i;j++){
            printf(" ");
        }
        for (j=1;j<2*(n+1-i);j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
