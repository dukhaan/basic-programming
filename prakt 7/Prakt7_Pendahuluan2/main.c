#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int hasil;
    char oprator;

    printf("Masukkan angka dengan format angka, operator, angka :\n");
    scanf("%d %c %d",&a,&oprator,&b);

    switch(oprator){
        case '*' :
            printf("\nHasil dari perkalian ke2 bilangan tersebut adalah %d\n\n",a*b);
            break;
        case '/' :
            printf("\nHasil dari pembagian ke2 bilangan tersebut adalah %d\n\n",a/b);
            break;
        case '+' :
            printf("\nHasil dari penjumlahan ke2 bilangan tersebut adalah %d\n\n",a+b);
            break;
        case '-' :
            printf("\nHasil dari pengurangan ke2 bilangan tersebut adalah %d\n\n",a-b);
            break;

        default : printf("Invalid operator");
            break;

    }


    return 0;
}
