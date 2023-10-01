#include <stdio.h>
#include <stdlib.h>

struct date{
    int day,month,year;
};

int jumhari(int,int);

int main()
{
    char jwb;
    struct date today,tomorrow;
    do{
        printf("Masukkan tanggal hari ini : ");
        scanf("%d %d %d",&today.day,&today.month,&today.year);

        if(today.day<1 || today.day > 31 || today.month < 1 || today.month > 12 || today.year < 1){
            printf("ERROR!!!");
            exit(0);
        }
        else if (today.month == 2 && today.year % 4 != 0){
            if (today.year % 100 == 0 || today.year % 400 != 0){
                if(today.day > 28){
                    printf("ERROR!!!");
                    exit(0);
                }
            }
        }

        if (today.day >= jumhari(today.month,today.year)){
            if(today.month == 12){
                tomorrow.day = 1;
                tomorrow.month = 1;
                tomorrow.year = today.year + 1;
            }
            else {
                tomorrow.day = 1;
                tomorrow.month = today.month + 1;
                tomorrow.year = today.year;
            }
        }

        else {
            tomorrow.day = today.day + 1;
            tomorrow.month = today.month;
            tomorrow.year = today.year;
        }
        printf("Tanggal besok : %d %d %d",tomorrow.day,tomorrow.month,tomorrow.year);
        fflush(stdin);
        printf("\n\nMau memasukkan data lagi [Y/N] : ");
        jwb = getchar();
        puts("");
    } while (jwb == 'Y' || jwb == 'y');
    return 0;
}

int jumhari(int month,int year){
    int day[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int jmlhari = day[month];
    if (month % 2 == 0 || year % 4 == 0){
        if (year % 100 != 0 || year % 400 != 0){
            jmlhari = 29;
        }
    }
    return jmlhari;
}
