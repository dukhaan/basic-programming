#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    x = (2 + 3) - 10 * 2;
    printf("Hasil dari (2 + 3) - 10 * 2 = %d\n", x);

    x = (2 + 3) - (10 * 2);
    printf("Hasil dari (2 + 3) - (10 * 2) = %d\n", x);

    x = 10 % 3 * 2 + 1;
    printf("Hasil dari 10 %% 3 * 2 + 1  = %d\n", x);

    return 0;
}
