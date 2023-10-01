#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAKS 200


typedef struct{
    char nama[MAKS],grade;
    float matematika,pemrograman,logika,rerata;
}daftarnilai;

void input(daftarnilai *);
void tampil(daftarnilai *);
int n;

int main(){
    daftarnilai student[MAKS];
    puts("MENGHITUNG NILAI AKHIR");
    puts("MATA KULIAH KONSEP PEMROGRAMAN\n");
    printf("Berapa jumlah mahasiswa : ");
    scanf("%d", &n);
    printf("\nMasukkan DATA MAHASISWA\n\n");
    input(student);
    tampil(student);
    return 0;
}

void input(daftarnilai *data)
{
    int i;
    for(i=0; i<n; i++){
        printf("Mahasiswa ke-%d", i+1);
        fflush(stdin);
        printf("\nNama\t\t\t : ");
        gets((*data).nama);
        fflush(stdin);
        printf("Nilai Matematika\t : ");
        scanf("%f", &(*data).matematika);
        fflush(stdin);
        printf("Nilai Pemrograman\t : ");
        scanf("%f", &(*data).pemrograman);
        printf("Nilai Logika Algoritma\t : ");
        scanf("%f", &(*data).logika);
        puts("");
        data++;
    }
}

void tampil(daftarnilai *data){
    int j;
    printf("\t\t\tDAFTAR NILAI\n");
    printf("--------------------------------------------------------------------------------------\n");
    printf("No\tNama\t\t\tNilai\t\t\t\n");
    printf("\t\t\t\tMatematika\tPemrograman\tLogika\t\tRerata\n");
    printf("--------------------------------------------------------------------------------------\n");
    for(j=0; j<n; j++){
        (*data).rerata = ((((*data).matematika)+((*data).pemrograman)+((*data).logika)) / 3);

        printf("%d\t%s\t\t\t%g\t\t%g\t\t%g\t\t%g\t\n",j+1,(*data).nama,(*data).matematika,(*data).pemrograman,(*data).logika,(*data).rerata);
        data++;
    }
    printf("--------------------------------------------------------------------------------------\n\n");
}
