#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q;
    int n;
    int i;
    int j;

    do{
    printf("Masukkan n : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    printf("\n\nApakah anda ingin keluar (y/t) : ");
    fflush(stdin);
    scanf("%c",&q);
    }while (q != 'y');

    return 0;
}
