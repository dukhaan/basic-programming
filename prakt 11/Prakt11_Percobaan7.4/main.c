#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int n=0;
    float a;
    float tampung=0;
    float max=0;
    float min;
    float rerata=0;
    int q;

    do{
    fflush(stdin);
    printf("Masukkan Matkul : ");
    scanf("%d",&n);


    for (i=1;i<=n;i++){

        printf("\nMasukkan Nilai ke-%d : ",i);
        scanf("%f",&a);
        tampung = tampung + a;
        fflush(stdin);
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

    printf("\n\nApakah anda ingin keluar (y/t) : ");
    fflush(stdin);
    scanf("%c",&q);
    }while (q != 'y');

    return 0;
}
