#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi,gecicisayi,basamakSayisi=0;
	
	printf("lutfen sayinizi giriniz:");
	scanf("%d",&sayi);
	gecicisayi=sayi;
	printf("sayinin tersi:");
	while(gecicisayi!=0)
	{
		printf("%d",gecicisayi%10);
		gecicisayi/=10;
		basamakSayisi++;
	}
	
	printf("\n%d sayisinin basamak sayisi:%d",sayi,basamakSayisi);
	return 0;
}
