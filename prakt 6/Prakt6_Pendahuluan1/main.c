#include <stdio.h>
#include <stdlib.h>

int main()
{

    int suhu;
    printf("Masukkan suhu dari suatu benda : ");
    scanf("%d",&suhu);

    if(suhu < 0)
    printf("\nSuhu benda %d, Benda ini berbentuk padat\n\n",suhu);

        else if (suhu >= 0 && suhu <= 100)
        printf("\nSuhu benda %d, Benda ini berbentuk cair\n\n",suhu);

    else printf("\nSuhu benda %d, Benda ini berbentuk gas\n\n",suhu);
    return 0;
}
