#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j=1;
    printf("Masukkan n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
