#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    int i;

    printf("Masukkan karakter bebas : ");
    scanf("%c",&n);

    while (n == '\n'){
            break;
    }

    printf("\nProgram Berakhir, Karakter yang dimasukkan : %c\n\n",n);

    return 0;
}
