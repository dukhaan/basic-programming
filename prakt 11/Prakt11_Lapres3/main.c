#include <stdio.h>
#include<stdlib.h>

int main() {
    int n,prima=0,i=0,faktor;
    printf("Masukkan bilangan n: ");
    scanf("%d",&n);

    while (i < n) {
        faktor = 0;
        for (int j = 1; j<=prima; j++) {
            if (prima % j == 0)
                faktor++;
        }
        if (faktor == 2) {
            printf("%d ",prima);
            i++;
        }
        prima++;
    }
    return 0;
}
