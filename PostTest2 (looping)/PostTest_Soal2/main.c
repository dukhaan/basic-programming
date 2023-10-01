#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,t=0,b,fpb=0;
    printf("Masukkan nilai M : ");
    scanf("%d",&m);
    printf("Masukakn nilai N : ");
    scanf("%d",&n);

    if(n>m){
        t = m;
    } else t = n;

    while(n>0){
        t=m%n;
        if (t==0){
            n/t;
            if (n%t==0){
                t=fpb;
            }

        } else {
            t-1;
            }
        }

    printf("FPB : %d",fpb);

    return 0;
}
