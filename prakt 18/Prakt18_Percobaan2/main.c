#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,fibo[10] = {0,1};
    printf("Masukkan n : ");
    scanf("%d",&n);

    printf("Hasil deret fibonacci : ");

    for (i=2;fibo[i-2]+fibo[i-1]<=n;i++){
        fibo[i] = fibo [i-2] + fibo[i-1];
    }

    for (j=0;j<i;j++){
        printf("%d ",fibo[j]);
    }

    return 0;
}
