#include <stdio.h>
#include <stdlib.h>

int pjgstr(char[]);

int main()
{
    char kalimat[20];
    printf("Masukkan kalimat : ");
    fgets(kalimat, sizeof kalimat, stdin);
    pjgstr(kalimat);
    printf("Panjang dari string : %d",pjgstr(kalimat));
    return 0;
}

int pjgstr(char kalimat[]){
    int i=0,kar=0;
    while (kalimat[i] != '\n'){
        if (kalimat[i] != 'n'){
            kar++;
        }
        i++;
    }
    return kar++;
}
