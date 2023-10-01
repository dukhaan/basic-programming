#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int j;

    printf("Masukkan n : ");
    scanf("%d",&n);


    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }


/* SEGITIGA TERBALIK
    for (i=1;i<=n;i++){
        for (j=i;j<=n;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    */

    return 0;
}
