#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int a;
    int hasil=0;
    int temp=0;

    printf("Masukkan angka : ");
    scanf("%d",&n);

    while (n != 0){
        temp = n % 10;
        printf("%d + ",temp);
        a = a + temp;
        n = n / 10;
    }

    printf("\b\b= %d",a);

   return 0;
}
