#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int n;
    float a;
    float tampung=0;
    float max=0;
    float min;
    float rerata;

    printf("Masukkan Matkul : ");
    scanf("%d",&n);


    for (i;i<=n;i++){
        printf("\nMasukkan Nilai ke-%d : ",i);
        scanf("%f",&a);
        tampung = tampung + a;
        rerata = tampung/n;

        if(i == 1){
            max = a;
            min = a;
        } else {

            if (max < a){
                max = a;
        }
            else if (min > a){
                min = a;
        }

        }
    }

    printf("Nilai maksimum : %g",max);
    printf("\nNilai Minimum  : %g",min);
    printf("\nNilai Rerata : %g",rerata);

    return 0;
}
