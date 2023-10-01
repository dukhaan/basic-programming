#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14159
#include <math.h>

/*
void findx(float[]);
void output (float[]);
float radian (float[]);

int main(){
    float sudut[13];
    printf("Menampilkan tabel trigonometri\n");
    findx(sudut);
    output(sudut);
    return 0;
}


void findx(float sudut[]){
    int i;
    float derajat=0;

    for(i=0;i<=360;i++){
        sudut[i] = derajat;
        derajat = derajat + 30;
    }
}

void output(float sudut[]){
    int i,j;
    float data[13][3];
    printf("=============================================\n");
    printf("    x   |   sin(x)  |   cos(x)  |   tan(x)  |\n ");
    printf("=============================================\n");
    for (i=0;i<13;i++){
        for (j-0;j<3;j++){
            if (j==0){
                data[i][j]=sin(radian(sudut[i]));
            }
            else if (j==1){
                data[i][j]=cos(radian(sudut[i]));
            }
            else data[i][j]=tan(radian(sudut[i]));
        }
    }
    for (i=0;i<13;i++){
        printf("    %3.0f   ",sudut[i]);
        for(j=0; j<3; j++){
            if (data [i][j] > 2){
                printf(" INFINITE    ");
            }
            else printf("   %5.2f       ",data[i][j]);
        }
        printf("\n");
    }
    printf("=============================================\n");
}
*/


void findrata(float[4][4]);

int main(){
    float data[4][4] = {{1,81,90,62},{2,50,83,87},{3,89,55,65},{4,77,70,92}};
    printf("Menampilkan nilai rata rata\n\n");
    findrata(data);
    return 0;
}

void findrata(float data[4][4]){
    int i,j;
    float rerata=0,total;
    printf("No. Mhs\t\t Rata-rata\n");
    printf("==========================\n");

    for(i=0;i<4;i++){
        total = 0;
        for (j=1;j<4;j++){
            total += data[i][j];
        }
        rerata = total / 3;
        printf("%d\t\t %.2f\n",i+1,rerata);
    }
    printf("==========================\n");

}
