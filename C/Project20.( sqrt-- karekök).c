#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// sqrt=karek�k alma

int main(int argc, char *argv[]) {
	
	int sayi,karekok;
	
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	karekok=sqrt(sayi);
	printf("sonuc: %d",karekok);
	
	return 0;
}
