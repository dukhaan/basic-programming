#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct zodiak{
      int tgl_awal;
      int bln_awal;
      int tgl_akhir;
      int bln_akhir;
    };

    struct zodiak bintang[] = {
        {"Aquarius", 20,1,18,2},
        {"Pisces", 19,2,20,3},
        {"Aries", 21,3,19,4},
        {"Taurus", 20,4,20,5},
        {"Gemini", 21,5,20,6},
        {"Cancer", 21,6,22,7},
        {"Leo", 23,7,22,8},
        {"Virgo", 23,8,22,9},
        {"Libra", 23,9,22,10},
        {"Scorpio", 23,10,21,11},
        {"Sagittarius", 22,11,21,12},
        {"Capricorn", 22,12,19,1},
    };
    int i;
    int tg_awal;
    int bl_awal;
    int tg_akhir;
    int bl_akhir;

    printf("Masukkan Tanggal lahir : ");
    scanf ("%d %d",tg_awal,bl_awal);

    for (i=0;i<12;i++){
        if(tg_awal >= bintang[0].tg_awal && (bl_awal == bintang[0].bl_awal));
    }

    return 0;
}
