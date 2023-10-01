#include <stdio.h>
main() {
struct zodiak {
	char nama[11];
	int tgl_awal;
	int bln_awal;
	int tgl_akhir;
	int bln_akhir;
      };

static struct zodiak bintang = {"Aquarius", 20,1,18,2};
static struct zodiak bintang1 = {"Pisces", 19,2,20,3};
static struct zodiak bintang2 = {"Aries", 21,3,19,4};
static struct zodiak bintang3 = {"Taurus", 20,4,20,5};
static struct zodiak bintang4 = {"Gemini", 21,5,20,6};
static struct zodiak bintang5 = {"Cancer", 21,6,22,7};
static struct zodiak bintang6 = {"Leo", 23,7,22,8};
static struct zodiak bintang7 = {"Virgo", 23,8,22,9};
static struct zodiak bintang8 = {"Libra", 23,9,22,10};
static struct zodiak bintang9 = {"Scorpio", 23,10,21,11};
static struct zodiak bintang10 = {"Sagittarius", 22,11,21,12};
static struct zodiak bintang11 = {"Capricorn", 22,12,19,1};

int tgl_lhr, bln_lhr;
printf("Masukkan bulan : ");
	scanf("%d %d %d",&tgl_lhr, &bln_lhr);
if ((tgl_lhr >= bintang.tgl_awal && bln_lhr == bintang.bln_awal) || (tgl_lhr <= bintang.tgl_akhir && bln_lhr == bintang.bln_akhir))
     printf("Bintang Anda adalah %s\n", bintang.nama);
}
