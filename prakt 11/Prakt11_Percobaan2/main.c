#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;

    printf(" masukkan angka ke n : ");
    scanf("%d",&n);

    for (i=1;i<=n;i+=2){
        if (i%3==0)
        continue;
        printf("%d ",i);

    }

    return 0;
}
