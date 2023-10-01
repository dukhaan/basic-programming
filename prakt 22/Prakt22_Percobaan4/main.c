#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[20],str2[20];
    int hasilcmp,hasilcmpi;
    printf("Masukkan string 1 : ");
    gets(str1);
    printf("Masukkan string 2 : ");
    gets(str2);

    hasilcmp = strcmp(str1,str2);
    hasilcmpi = strcmpi(str1,str2);

    if (hasilcmp == 0){
        printf("\nKedua string sama (strcmp)");
    } else printf("\nKedua string tidak sama (strcmp)");

    if (hasilcmpi == 0){
        printf("\nKedua string sama (strcmpi)\n");
    } else printf("\nKedua string sama (strcmpi)\n");


    return 0;
}
