#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    printf("masukan string : ");

    gets(str1);
    printf("Panjang dari string (strlen)     : %d\n", strlen(str1));
    printf("String setelah di balik (strrev) : %s\n", strrev(str1));
    strcpy(str2, str1);
    printf("String setelah di copy (strcpy)  : %s", str2);
    return 0;
}
