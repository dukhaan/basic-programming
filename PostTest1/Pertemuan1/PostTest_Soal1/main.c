#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int pertama,kedua,ketiga;

        printf("Masukan bilangan 1 : \t");
        scanf("%i",&a);
        printf("Masukan bilangan 2 : \t");
        scanf("%i",&b);
        printf("Masukan bilangan 3 : \t");
        scanf("%i",&c);

        if(a>b){
            if(b>c){
            pertama=a;kedua=b;ketiga=c;
            }else{
            if(a>c){
            pertama=a;kedua=c;ketiga=b;
            }else{
            pertama=c;kedua=a;ketiga=b;
            }
          }
        }


 else{
  if(b>c){
   if(a>c){
    pertama=b;kedua=a;ketiga=c;
   }else{
    pertama=b;kedua=c;ketiga=a;
   }
  }else{
   if(c>a){
    if(a>b){
     pertama=c;kedua=a;ketiga=b;
    }else{
     pertama=c;kedua=b;ketiga=a;
    }
   }
  }
 }
 printf("%i , %i , %i \n",pertama,kedua,ketiga);





    return 0;
}
