#include <stdio.h>
#include <stdlib.h>

struct data{
    char nama[200],grade;
    float tugas,uas,uts,akhir;
};

void input(struct data []);
void output(struct data []);
int n;

int main()
{
    struct data student[200];
    puts("MENGHITUNG NILAI AKHIR");
    puts("MATA KULIAH KONSEP PEMROGRAMAN");
    puts("");
    printf("Berapa jumlah mahasiswa : ");
    scanf("%d",&n);
    printf("Masukkan DATA Mahasiswa\n                               ");
    input(student);
    output(student);
    return 0;
}

void input(struct data mahasiswa[200]){
    int i;
    for(i=0;i<n;i++){
        printf("Mahasiswa ke=%d : ",i+1);
        fflush(stdin);
        printf("\nNama\t\t : ");
        gets(mahasiswa[i].nama);
        fflush(stdin);
        printf("\nNilai tugas\t : ");
        scanf("%f",&mahasiswa[i].tugas);
        fflush(stdin);
        printf("\nNilai UTS\t : ");
        scanf("%f",&mahasiswa[i].uts);
        fflush(stdin);
        printf("\nNilai UAS\t : ");
        scanf("%f",&mahasiswa[i].uas);
        fflush(stdin);
        puts("");
    }
}

void output (struct data mahasiswa[200]){
    int j;
    printf("\n\n\t\t\tDAFTAR NILAI\n");
    printf("\t\tMATAKULIAH KONSEP PEMROGRAMAN\n");
    printf("-------------------------------------------------------------------------\n");
    printf("No\tNama\t\t\t\tNilai\t\t\tGrade\n");
    printf("\tMahasiswa\t\tTugas\tUTS\tUAS\tAkhir\n");
    printf("-------------------------------------------------------------------------\n");

    for(j=0;j<n;j++){
        mahasiswa[j].akhir= (mahasiswa[j].tugas*0.2)+(mahasiswa[j].uts*0.4)+(mahasiswa[j].uas*0.4);
        if(mahasiswa[j].akhir >= 80)
            mahasiswa[j].grade = 'A';
        else if (mahasiswa[j].akhir >= 70)
            mahasiswa[j].grade = 'B';
        else if (mahasiswa[j].akhir >= 60)
            mahasiswa[j].grade = 'C';
        else if (mahasiswa[j].akhir >= 50)
            mahasiswa[j].grade = 'D';
        else if (mahasiswa[j].akhir < 50)
            mahasiswa[j].grade = 'E';
            printf("%d\t%s\t\t\t%g\t%g\t%g\t%g\t%c\n",j+1,mahasiswa[j].nama,mahasiswa[j].tugas,mahasiswa[j].uts,mahasiswa[j].uas,mahasiswa[j].akhir,mahasiswa[j].grade);
    }
    printf("-------------------------------------------------------------------------\n\n");
    printf("Total Mahasiswa = %d", n);


}
