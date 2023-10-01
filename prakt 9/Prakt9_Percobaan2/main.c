#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    int hasil=0;

    printf("Masukkan angka : ");
    scanf("%d",&n);

    for (i=1 ; n>=i ; n--){
        hasil = hasil + n;
        printf("%d + ",n);
    }
        printf("\b\b= %d\n\n",hasil);
    return 0;
}
