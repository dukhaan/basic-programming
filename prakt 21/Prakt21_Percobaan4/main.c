#include <stdio.h>
#include <stdlib.h>

void copystr(char[],char[]);

int main()
{
    char kalimat[20];
    char copykalimat[20];
    printf("Masukkan kalimat : ");
    fgets(kalimat,sizeof kalimat,stdin);
    copystr(kalimat,copykalimat);

    printf("\nString asal : %s",kalimat);
    printf("\nString copy : %s\n", copykalimat);
    return 0;
}

void copystr(char kalimat[],char copykalimat[]){
    int i=0;
    while (kalimat[i] != 0){
        copykalimat[i] = kalimat[i];
        i++;
    }
    copykalimat[i] = '\0';
}
