#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datamenu {
	char kode;
	int jumlah;
};

int main()
{
	struct datamenu keranjang[30];
	int	i = 0,j,harga,total=0;
	char jwb,jenis[6];

	printf("Toko GFC-Gerobak Fried Chicken\n");
	printf("\nDAFTAR HARGA");
	printf("\nKode   Jenis   Harga Per Potong");
	printf("\nD      Dada    Rp. 5000.00");
	printf("\nP      Paha    Rp. 4000.00");
	printf("\nS      Sayap   Rp. 3000.00");
	printf("\n\nHarga belum termasuk pajak : 10 %%");
	printf("\n\nMasukkan Pesanan Anda");

	do{
		printf("\nPesanan ke-%d",i+1);
		fflush(stdin);
		printf("\nJenis [D/P/S]\t: ");
		scanf("%c",&keranjang[i].kode);
		fflush(stdin);
		printf("Jumlah \t\t: ");
		scanf("%d",&keranjang[i].jumlah);

		i++;
		fflush(stdin);
		printf("\nMau pesan lagi [y/n] ?");
		jwb = getchar();
	}while(jwb == 'Y' || jwb == 'y');

	printf("\n\nNota Belanja Anda : \n");
	printf("\n                    GEROBAK FRIED CHICKEN\n");
	printf("\n================================================================");
	printf("\nNo\tJenis Potong\tHarga Satuan\tQty\tJumlah Harga");
	printf("\n================================================================");

	for(j=0;j<i;j++){
		switch(keranjang[j].kode){
			case 'D': case 'd' :
				strcpy(jenis,"DADA");
				harga = 5000;
			break;

			case 'P': case 'p' :
				strcpy(jenis,"PAHA");
				harga = 4000;
			break;

			case 'S': case 's' :
				strcpy(jenis,"SAYAP");
				harga = 3000;
			break;
		}

		printf("\n%d\t%s\t\tRp. %.2d\t%d\tRp. %6.2d",j+1, jenis, harga, keranjang[j].jumlah, harga * keranjang[j].jumlah);
		total = total +  harga * keranjang[j].jumlah;
	}

	printf("\n================================================================");
	printf("\n                     Jumlah bayar\tRp. %6.2d",total);
	printf("\n                     Pajak 10%%\t\tRp. %6.2d",total / 10);
	printf("\n                     Total bayar\tRp. %6.2d",total + total / 10);
	printf("\n\n          TERIMA KASIH ATAS KUNJUNGANNYA\n");
}
