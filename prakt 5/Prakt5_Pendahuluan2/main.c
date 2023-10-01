#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Masukkan angka : ");
    scanf("%d",&a);

    if (a % 2 == 0){
        printf("\nAngka %d adalah bilangan Genap\n",a);
    }else printf("\nAngka %d adalah bilangan Ganjil\n",a);
    return 0;
}
