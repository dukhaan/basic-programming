#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float m,rerata=0,max=0,min=0,tampung=0;
    printf("Masukkan jumlah data : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        printf("Nilai ke-%d : ",i);
        scanf("%f",&m);
        tampung += m;
        rerata = tampung/i;
        if(max<m || max == 0){
            max++;
        }
        if(min>m || min == 0){
            min++;
        }
    }
    printf("Rata rata : %g",rerata);

    /*
    int n,i;
    scanf("%d",&n);

    for (i=1;i<=n;i+=2){
        if (i % 7 == 0 || i % 11 == 0){
            continue;
        }
        if (n>=100){
            break;
        }
        printf("%d ",i);
    }
    */
    return 0;
}
