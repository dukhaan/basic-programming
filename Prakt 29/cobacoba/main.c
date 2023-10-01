#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kata[100];
scanf("%[^\n]%*c", kata);
int j = 0;
   for (int i = 0; i < strlen(kata); i++)
   {
       if (kata[i] != ' ')
       {
           j++;
           if (kata[i] > 96 && j % 2 == 1)
               kata[i] -= 32;
           else if (kata[i] < 96 && j % 2 == 0)
               kata[i] += 32;
       }
   }
   kata[strlen(kata)] = '\0';
   printf("%s", kata);
}
