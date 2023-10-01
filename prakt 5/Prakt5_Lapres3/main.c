#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Masukkan bilangan bulat: ");
    scanf("%d",&a);

    if(a <= 0){
        int b = a * -1;
        printf("Nilai absolut dari %d adalah %d",a,b);
    }else printf("Nilai absolut dari %d adalah %d",a,a);

    return 0;
}
