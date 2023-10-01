#include <stdio.h>
#include <stdlib.h>

int main()
{
    float TA;
    float TK;
    float TP;

    printf("Masukkan Nilai Tes Akademik : ");
    scanf("%f",&TA);

    printf("Masukkan Nilai Tes Keterampilan : ");
    scanf("%f",&TK);

    printf("Masukkan Nilai Tes Psikologi : ");
    scanf("%f",&TP);

    float rerata = (TA + TK + TP) / 3;

    if (rerata >= 75){
        if (TA > TK && TP)
        printf("\nSelamat anda lulus dibagian administrasi dengan rata rata nilai %0.1f\n",rerata);

        else if (TK > TP && TA)
        printf("\nSelamat anda lulus dibagian Keterampilan dengan rata rata nilai %0.1f\n",rerata);

        else
        printf("Selamat anda lulus dibagian Pemasaran dengan rata rata nilai %0.1f\n",rerata);

    } else printf("\nMaaf nilai dengan rata rata %0.1f tidak mencukupi \n\nanda tidak lulus\n\n",rerata);

    return 0;
}
