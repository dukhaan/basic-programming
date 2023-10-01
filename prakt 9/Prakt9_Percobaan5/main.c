#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, BP=0;
    printf("Masukkan angka : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        if (n%i == 0){
            BP++;
        }
    }

        if (BP <= 2){
            printf("\nAngka %d adalah bilangan prima\n\n",n);
        }
        else {
            printf("\nAngka %d bukan bilangan prima\n\n",n);
        }


    return 0;
}
