#include <stdio.h>
#include <stdlib.h>

float f_to_i(float);
float i_to_cm(float);
float c_to_m(float);

int main()
{
    float f,inch,cm,m;
    printf("Masukkan ukuran dalam satuan kaki (feet) : ");
    scanf("%f",&f);
    inch = f_to_i(f);
    cm = i_to_cm(inch);
    m = c_to_m(cm);
    printf("%g feet = %g inchi\n", f, inch);
    printf("%g inchi = %g cm\n", inch, cm);
    printf("%g cm = %g m\n", cm, m);

    return 0;
}

float f_to_i(float f){
    float inci;
    inci = f * 12;
    return inci;
}

float i_to_cm(float f){
    float cm;
    cm = f * 2.54;
    return cm;
}

float c_to_m(float f){
    float m;
    m = f / 100;
    return m;
}


