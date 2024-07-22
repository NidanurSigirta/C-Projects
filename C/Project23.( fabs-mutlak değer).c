#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// fabs=mutlak deðer alma

int main(int argc, char *argv[]) {
	
	double sayi,sonuc;
	
	printf("lutfen bir sayi giriniz:");
	scanf("%lf",&sayi);
	
	sonuc=fabs(sayi);
	
	printf("sonuc: %.2lf",sonuc);
		return 0;
}
