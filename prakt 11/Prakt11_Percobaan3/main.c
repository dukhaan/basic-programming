#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=1;

    printf("Masukkan angka : ");
    scanf("%d",&n);

    for (i;i<n;i=i+2){
        if (i%7 == 0 || i % 11 == 0)
        continue;
        if (i>100)
        break;
            printf("%d ",i);

    }
    return 0;
}
