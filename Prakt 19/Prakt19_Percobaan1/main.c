#include <stdio.h>
#include <stdlib.h>
#define MAKS 100

int n;

int input(int[]);
int findmax(int[]);

int main(){
    int data[MAKS];
    input(data);
    findmax(data);
    return 0;
}

int input(int nilai[]){
    int i,n;
    printf("Masukkan jumlah data : ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Masukkan data ke-%d : ",i+1);
        scanf("%d",&nilai[i]);
    }
}

int findmax(int nilai[]){
    int i,max;
    for (i=0;i<n;i++){
        if(max < nilai[i] || i == 0){
            max = nilai[i];
        }
    }
    printf("Nilai terbesar adalah : %d",max);
}
