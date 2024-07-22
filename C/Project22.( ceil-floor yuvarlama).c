#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// floor=ondalýklý sayýyý alta yuvarla ,ceil=ondalýklý sayýyý yukarýya yuvarla

int main(int argc, char *argv[]) {
	
	int sonuc1,sonuc2;
	double sayi;
	
	printf("lutfen ondalikli bir sayi giriniz:");
	scanf("%lf",&sayi);
	
	sonuc1=ceil(sayi);
	sonuc2=floor(sayi);
	
	printf("sonuc1: %d\n",sonuc1);
	printf("sonuc2: %d",sonuc2);
	return 0;
}
