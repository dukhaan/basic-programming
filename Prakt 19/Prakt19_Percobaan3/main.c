#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

void findX(float[]);
void output(float[]);
float radian(float);

int main(){
    float x[13];
    puts("Menampilkan Tabel Trigonometri\n");
    findX(x);
    output(x);
    return 0;
}
void findX(float sudut[]){
    int i;
    float derajat=0;
    for(i=0; derajat<=360; i++){
        sudut[i] = derajat;
        derajat+=30;
    }
}
void output(float sudut[]){
    int i, j;
    float data[13][3];
    printf("------------------------------------------------------\n");
    printf("|     x     |   sin(x)   |    cos(x)   |    tan(x)   |\n");
    printf("------------------------------------------------------\n");
    for(i=0; i<13; i++){
        for(j=0; j<3; j++){
            if(j==0)
                data[i][j]=sin(radian(sudut[i]));
            else if(j==1)
                data[i][j]=cos(radian(sudut[i]));
            else
                data[i][j]=tan(radian(sudut[i]));
        }
    }
    for(i=0; i<13; i++){
        printf("    %3.0f       ", sudut[i]);
        for(j=0; j<3; j++){
            if(data[i][j]>2)
                printf(" INFINITE    ");
            else
                printf("  %5.2f       ", data[i][j]);
        }
        puts("");
    }
    printf("------------------------------------------------------\n");
}
float radian(float derajat){
    return derajat / 180.0 * PI;
}
