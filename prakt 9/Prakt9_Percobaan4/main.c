#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Masukkan angka : ");
    scanf("%d",&n);

    for (int i=1;i<=n; i++){
        if (i % 2 == 0)
        printf("-%d ",i);
        else printf("%d ",i);
    }

    return 0;
}
