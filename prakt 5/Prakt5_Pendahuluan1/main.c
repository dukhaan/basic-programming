#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Masukkan angka : ");
    scanf("%d",&a);
    if (a >= 0){
        printf("\nAngka %d adalah nilai positif\n",a);
    }
    else printf("\nAngka %d adalah nilai negatif\n",a);
    return 0;
}
