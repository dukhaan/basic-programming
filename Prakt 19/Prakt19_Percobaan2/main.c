#include <stdio.h>
#include <stdlib.h>
void findRata(float[4][4]);

int main(){
    float data[4][4] = {{1,81,90,62},{2,50,83,87},{3,89,55,65},{4,77,70,92}};
    puts("Menampilkan Rata-Rata dari Sekumpulan Data\n");
    findRata(data);
    return 0;
}
void findRata(float data[4][4]){
    int i, j, jumdata=4;
    float rata=0, total;
    printf("No. M\t\tRata-rata\n");
    printf("-------------------------\n");
    for(i=0; i<jumdata; i++){
        total = 0;
        for(j=1;j<4;j++)
            total += data[i][j];
        rata = total/3;
        printf("   %d\t\t %.2f\n", i+1, rata);
    }
    printf("-------------------------\n");
}
