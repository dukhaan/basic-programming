#include <stdio.h>
#include <stdlib.h>

void cetak_tanggal(int, int, int);
int main()
{
	struct date {
		int month, day, year;
	} today;

	printf("Enter the current date (mm-dd-yyyy): ");
	scanf("%d-%d-%d", &today.month, &today.day, &today.year);
	cetak_tanggal(today.month, today.day, today.year);

	getch();
	return 0;
}

void cetak_tanggal(int mm, int dd, int yy){
	char *nama_bulan[] = {
		"Wrong month", "January", "February", "March",
		"April", "May", "June", "July", "August",
		"September", "October", "November", "December"
	};

	printf("Todays date is %s %d, %d\n\n", nama_bulan[mm],dd,yy);
}
