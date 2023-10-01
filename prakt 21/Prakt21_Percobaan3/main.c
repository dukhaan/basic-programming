#include <stdio.h>
#include <stdlib.h>

int pjgstr(char[]);
void balikstr(char[],int);

int main()
{
    char kalimat[20];
    printf("Masukkan kalimat : ");
    fgets(kalimat, sizeof kalimat, stdin);
    pjgstr(kalimat);
    printf("Panjang dari string : %d",pjgstr(kalimat));
    balikstr(kalimat,pjgstr(kalimat));
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

void balikstr(char kalimat[],int i){
    printf("\nKebalikan : ");
    for (i=i-1;i>=0;i--){
        printf("%c",kalimat[i]);
    }
}
