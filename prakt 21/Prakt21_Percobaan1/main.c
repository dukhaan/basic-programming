#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[12];
    printf("Masukkan nama anda (scanf) : ");
    scanf("%s",nama);
    printf("Hasil dari scanf : %s",nama);
    fflush(stdin);

    printf("\n\nMasukkan nama anda (gets) : ");
    gets(nama);
    printf("Hasil dari gets : %s",nama);
    fflush(stdin);

    printf("\n\nMasukkan nama anda (fgets) : ");
    fgets(nama,sizeof nama,stdin);
    printf("Hasil dari fgets : %s",nama);
    return 0;
}
