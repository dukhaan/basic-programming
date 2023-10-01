#include <stdio.h>
#include <stdlib.h>

int fungsicn(int n);
int fungsisn(int n);

int main()
{
    int n;
    int cn;
    int sn;
    printf("Masukkan nilai n : ");
    scanf("%d",&n);

    cn = fungsicn(n);
    sn = fungsisn(n);

    printf("Hasil fungsi Cn = Cn-1 + 2 dari n = %d adalah %d",n,cn);
    printf("\n\nHasil fungsi Sn = Sn-1 + n - 1 dari n = %d adalah %d\n\n",n,sn);

    return 0;
}

int fungsicn(int n){

int cn=1;
int i;
for (i=1;i<=n;i++){
    cn = (2*cn) + 1;
}
return cn;
}


int fungsisn(int n){

int sn=0;
int i;
int a=0;

for (i=1;i<=n;i++){
    sn = sn + a;
    a++;
}
return sn;

}
