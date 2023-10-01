#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int n,i,j,max=0,minimum,temp=0,average;

    printf("Masukkan jumlah data n : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        printf("Masukkan data ke - %d : ",i);
        scanf("%d",&j);
        temp = temp + j;
        average = temp/n;
        if (max <= j||max==0){
            max = j;
        }
        if(minimum >= j ||minimum==0){
            minimum = j;
        }
    }

    printf("\nNilai Max : %d",max);
    printf("\nNilai Min : %d",minimum);
    printf("\nNilai Rata rata : %d",average);
    */


    int n;
    int i;

    printf("Masukkan n : ");
    scanf("%d",&n);

    for (i=1;i<=n;i+=2){
        if(i%7==0 || i%11==0){
            continue;
        }
        if(i>100){
            break;
        }
        printf("%d ",i);
    }


    /*
    int i;
    int n;
    printf("Masukkan n : ");
    scanf("%d",&n);

    for (i=1;i<=n;i+=2){
        if (i%3==0){
            continue;
        }
        printf("%d ",i);
    }
    */

    /*
    char n;

    printf("Masukkan karakter : ");
    scanf("%c",&n);

    while(n != '\n'){
        printf("\nProgram Berhenti");
        break;
    }
    printf("\n\nKarakter yang anda masukkan : %c\n\n",n);
    */

    return 0;
}
