#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int q;

    do{
    printf("Masukkan angka : ");
    scanf("%d",&n);

    for (i=1;i<n;i=i+2){
        if (i%7 == 0 || i % 11 == 0)
        continue;
        if (i>100)
        break;
            printf("%d ",i);
    }

    printf("\nApakah anda ingin keluar (y/t) : ");
    fflush(stdin);
    scanf("%c",&q);
    }while (q != 'y');

    return 0;
}
