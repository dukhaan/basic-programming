#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("masukan nilai a : ");
    scanf("%d",&a);
    printf("masukan nilai b : ");
    scanf("%d",&b);
    printf("masukan nilai c : ");
    scanf("%d",&c);

    d = b * b - 4 * a * c;
    printf("Nilai diskriminan = %d\n",d);

    return 0;
}
