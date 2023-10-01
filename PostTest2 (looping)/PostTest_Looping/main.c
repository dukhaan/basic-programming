#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,bil=0;
    scanf("%d",&n);
    for (i=1;i<=n*2-1;i++){
        printf("%d ",i);
        i = i + bil;
        bil++;
        if (bil % 3 == 0){
            bil = 0;
        }
    }

    return 0;
}
