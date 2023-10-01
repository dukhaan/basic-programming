#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;


    while (i != 'X' && i != 'x'){
    printf("Masukkan 1 karakter bebas : ");
    scanf("%c",&i);
    fflush(stdin);
    }

    return 0;
}
