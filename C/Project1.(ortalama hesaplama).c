#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 3 sýnav ve bir proje notu girilen öðrencinin ortalamasýnýn hesaplanmasý

int main(int argc, char *argv[]) {
	
	int s1,s2,s3,p; //1.sýnav,2.sýnav,3.sýnav,proje
	float ortalama;
	
	printf("Lutfen ogrencinin birinci sinav notunu giriniz:");
	scanf("%i",&s1);
	
	printf("Lutfen ogrencinin ikinci sinav notunu giriniz:");
	scanf("%d",&s2);
	
	printf("Lutfen ogrencinin ucuncu sinav notunu giriniz:");
	scanf("%d",&s3);
	
	printf("Lutfen ogrencinin proje notunu giriniz:");
	scanf("%d",&p);
	
	ortalama=(s1+s2+s3+p)/4;
	
	printf("\nOrtalama= %.f",ortalama);
	
	return 0;
}
