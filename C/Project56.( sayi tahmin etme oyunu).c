#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	int rastgelesayi=(rand()%100)+1;
	int tahmin;
	
	printf("*****SAYI TAHM�N OYUNU*****\n\n");
	
	printf("Lutfen tahmininizi giriniz:");
	scanf("%d",&tahmin);
	
	while(rastgelesayi!=tahmin){
		
		if(rastgelesayi<tahmin)
		{
			printf("Tahmininizi d���r�n�z ");
			scanf("%d",&tahmin);
		}
		else if(rastgelesayi>tahmin)
		{
			printf("Tahmininizi y�kseltiniz ");
			scanf("%d",&tahmin);
		}
	}
	
	if(tahmin==rastgelesayi){
		printf("Tebrikler do�ru tahmin :)");
	}
	
	return 0;
}
