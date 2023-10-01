#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gajipokok;
    printf("Masukkan gaji pokok anda : ");
    scanf("%f",&gajipokok);

    float TI = gajipokok * 0.1;
    printf("Tunjangan istri : Rp%0.0f",TI);

    float jml_anak;
    printf("\n\nMasukkan jumlah anak anda : ");
    scanf("%f",&jml_anak);
    float TA = (gajipokok * 0.05) * jml_anak;
    printf("Tunjangan anak anda : Rp%0.0f",TA);

    float thn_kerja;
    printf("\n\nSudah bekerja selama (tahun) : ");
    scanf("%f",&thn_kerja);
    float thr = 5000 * thn_kerja;
    printf("THR anda : Rp%0.0f",thr);

    float pajak = (gajipokok + TI + TA) * 0.15;
    printf("\n\nPajak anda : Rp%0.0f ",pajak);

    float hariaktif;
    printf("\n\nMasa aktif bekerja (hari/bulan) : ");
    scanf("%f", &hariaktif);
    float transport = 3000 * hariaktif;
    printf("Bantuan Transport : Rp%0.0f",transport);

    float asuransi = 20000;
    float totalpendapatan = gajipokok + TI + TA + thr - pajak + transport - asuransi;
    printf("\n\nTotal pendapatan anda adalah : Rp%0.0f\n", totalpendapatan);



    return 0;
}
