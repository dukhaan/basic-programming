#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=1;

    printf("Mau menampilkan berapa menu : ");
    scanf("%d",&n);

    for (i;i<=n;i++){
        menu();
    }
        return 0;
}


    void menu(){
        printf("\n\nPilihan MENU : ");
        printf("\n1. Ayam goreng");
        printf("\n2. Ayam bakar");
    }



