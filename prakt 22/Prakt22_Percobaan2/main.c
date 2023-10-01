#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bandingstr1();
char str1[10], str2[10];

int main()
{
    int hasil;
    printf("Masukkan string pertama : ");
    gets(str1);
    printf("Masukkan string kedua   : ");
    gets(str2);
    hasil = bandingstr1();

    if (hasil == 0){
        printf("String sama");
    } else printf("String beda");

    return 0;
}

int bandingstr1(){
    int i,sama=0;

    for(i=0; i < strlen(str1) || i < strlen(str2);i++){
        if (str1[i] != str2[i]){
            sama = 1;
            break;
        }
        i++;
    }
    return sama;
}
