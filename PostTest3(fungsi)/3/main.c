#include <stdio.h>
#include <stdlib.h>

void ratasiswa(float [5][4]);
void ratamatkul(float [5][4]);

int main()
{
    float nilai[5][4] = {{8.4,8.4,9.4,6.4},{7.6,6.6,7.6,8.6},{5.4,8.4,5.4,8.4},{4.6,6.6,8.6,7.6},{7.6,6.6,6.6,7.6}};
    puts("Nilai rata rata Mahasiswa\n");
    ratasiswa(nilai);
    puts("=============================================");
    puts("\n\nNilai rata rata mata kuliah MK\n");
    ratamatkul(nilai);

    return 0;
}

void ratasiswa(float nilai[5][4]){
    int i, j, jumdata=5;
    float rata=0, total;
    printf("No Msiswa \tRata-rata\n");
    printf("-------------------------\n");
    for(i=0; i<jumdata; i++){
        total = 0;
        for(j=0;j<4;j++)
            total += nilai[i][j];
        rata = total/4;
        printf("   %d\t\t %.2f\n", i+1, rata);
    }
    printf("-------------------------\n");
}

void ratamatkul(float nilai[5][4]){
    int i, j, jumdata=4;
    float rata=0, total;
    printf("No Msiswa \tRata-rata\n");
    printf("-------------------------\n");
    for(j=0; j<jumdata; j++){
        total = 0;
        for(i=0;i<5;i++)
            total += nilai[i][j];
        rata = total/5;
        printf("   %d\t\t %.2f\n", j+1, rata);
    }
    printf("-------------------------\n");
}
