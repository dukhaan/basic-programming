#include <stdio.h>
#include <stdlib.h>

float radian(float);

int main()
{
    float n,total;
    printf("Masukkan n : ");
    scanf("%f",&n);

    total = radian(n);
    printf("Derajat dalam radian : %g",total);
    return 0;
}


float radian(float n){
    float rad=0,pi=3.14159;
    rad = (n/180.0f)*pi;
    return rad;

}
