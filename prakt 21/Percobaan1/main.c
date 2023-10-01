#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[5];
    char b[5];
    char c[5];

    scanf("%s",a);
    fflush(stdin);
    gets(b);
    fflush(stdin);
    fgets(c,4,stdin);

    printf("Hasil dari fungsi scanf : %s",a);
    printf("\nHasil dari fungsi gets : %s",b);
    printf("\nHasil dari fungsi fgets : %s",c);

    return 0;
}
