#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char nilai_huruf;
    float ips, nilai_matkul, jumlahilai=0,jam, jumlahjam=0;
    puts("Menentukan IPS Semester\n");

    for(i=1; i<=5; i++)
    {

        printf("Nilai Mata Kuliah (A-E) %d : ", i);
        scanf("%c", &nilai_huruf);
        fflush(stdin);

        printf("Jumlah Jam\t\t  : ");
        scanf("%f", &jam);
        fflush(stdin);

        switch(nilai_huruf)
        {
            case 'A' : nilai_matkul = 4; break;
            case 'a' : nilai_matkul = 4; break;
            case 'B' : nilai_matkul = 3; break;
            case 'b' : nilai_matkul = 3; break;
            case 'C' : nilai_matkul = 2; break;
            case 'c' : nilai_matkul = 2; break;
            case 'D' : nilai_matkul = 1; break;
            case 'd' : nilai_matkul = 1; break;
            case 'E' : nilai_matkul = 0; break;
            case 'e' : nilai_matkul = 0; break;
            default : printf("!Error!\n");
        }
        jumlahilai = jumlahilai + nilai_matkul * jam;
        jumlahjam = jumlahjam + jam;
    }
    ips = jumlahilai/jumlahjam;
    printf("Maka IPS semester ini adalah %.2f", ips);


    /*
    int i,n,hasil=0;
    scanf("%d",&n);

    for (i=n;i>0;i--){
        hasil += i;
        printf("%d + ",i);
    }
    printf("\b\b= %d",hasil);
    */
    /*
    int n,i,bil=1;
    scanf("%d",&n);

    for(i=1;i<=n*2;i+=2){
        printf("%d ",i);
    }
    */

    return 0;
}
