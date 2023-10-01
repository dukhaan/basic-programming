#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Masukkan bilangan ke=n : ");
    scanf("%d",&n);
    triangular(n);
    return 0;
}

    void triangular(int a){
    int total = 0;
    for (int i=1;a>=i;a--){
        printf("%d + ",a);
        total = total + a;
    }
    printf("\b\b= %d",total);
    }
