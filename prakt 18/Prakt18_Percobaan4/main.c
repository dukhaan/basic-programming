#include <stdio.h>
#include <stdlib.h>
#define MAKS 100

int main()
{
    int i,n,data[MAKS],max;
    printf("Masukkan jumlah data array : ");\
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("Masukkan array indeks ke-%d : ",i);
        scanf("%d",&data[MAKS]);

        if(max<data[MAKS] || i==0){
            max = data[MAKS];
        }
    }
    printf("Nilai terbesar adalah : %d",max);
    return 0;
}
