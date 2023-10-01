#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bandingstr2();
char str1[10], str2[10];

int main()
{
    int hasil;
    printf("Masukkan string pertama : ");
    gets(str1);
    printf("Masukkan string kedua   : ");
    gets(str2);
    hasil = bandingstr2();

    if (hasil == 0){
        printf("String sama");
    } else printf("String beda");


    return 0;
}

int bandingstr2(){
    int i,sama=0;

    for (i=0; i < strlen(str1) || i < strlen(str2);i++){
        if (str1[i] > str2[i]){
           if (str1[i] != str2[i] + 32){
            sama = 1;
            break;
           }
        }
        else if (str1[i] < str2[i]){
            if (str1 != str2[i] - 32){
                sama = -1;
                break;
            }
        }
    }
    return sama;
}
