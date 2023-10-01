#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0;
    int n;
    int a=1;

    printf("Masukkan angka ke-n : ");
    scanf("%d",&n);

    while (i<=n){
        printf("%d ",i);
        i=i+a;
        a++;
    }

    return 0;
}
