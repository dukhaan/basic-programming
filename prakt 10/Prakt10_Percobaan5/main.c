#include <stdio.h>
#include <stdlib.h>


int main(){

    char i;
    int n;
    int spasi;
    int karakter=0;

    printf("Masukkan kalimat : ");

    while(i != '\n'){

        scanf("%c",&i);
        if (i == ' ')
            spasi++;
        else
            karakter++;
    }

    printf("\n\nJumlah karakter adalah : %d",karakter-1);
    printf("\nJumlah spasi adalah : %d\n",spasi);
}
