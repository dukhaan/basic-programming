#include <stdio.h>
#include <stdlib.h>
#define MAKS 2

int main()
{
    int a[MAKS][MAKS], b[MAKS][MAKS], c[MAKS][MAKS], i, j;

    //MATRIKS A INPUT
    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            fflush(stdin);
            printf("Masukkan nilai matriks A [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //MATRIKS B INPUT
    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            fflush(stdin);
            printf("Masukkan nilai matriks B[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    //MENAMPILKAN MATRIKS A
    puts("Matriks A");
    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    //MENAMPILKAN MATRIKS B
    printf("\n");
    puts("Matriks B");
    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }

    // RESULT C = (A + B)
    printf("\n");
    puts("Matriks C = (A+B)");
    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            printf("%3d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
