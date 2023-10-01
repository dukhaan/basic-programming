#include <stdio.h>
#include <stdlib.h>

int bandingNama(char[], char[]);
char nama1[6], nama2[6];

int main()
{
    printf("Input Nama 1 : ");
    gets(nama1);

    printf("Input Nama 2 : ");
    gets(nama2);

    int hasil = bandingNama(nama1, nama2);
    if (hasil == 0){
        printf("Nama sama");
    } else printf("Nama beda");

    return 0;
}

int bandingNama(char nama1[], char nama2[])
{
    int i = 0, hasil = 0;

    while(nama1[i] != '\0' || nama2[i] != '\0')
    {
        if(nama1[i] > nama2[i])
        {
            hasil=1;
            break;
        }
        i++;
    }
    return hasil;
}
