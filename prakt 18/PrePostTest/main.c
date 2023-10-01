#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    puts("Program Menghitung Jumlah Array");

    //input Matriks A
    puts("\nInput Matriks A");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Masukkan Matriks [%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //input matriks B
    puts("\nInput Matriks B");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Masukkan Matriks [%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //Hasil
    puts("\nHasil : ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j] + b[i][j]);
        }
        printf("\n");
    }


    return 0;
}
