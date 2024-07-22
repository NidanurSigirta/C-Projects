#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sinav[100];
	int sayi,i;
	int toplam=0;
    float ort;
		
	printf("sinav sayisini giriniz:");
	scanf("%d",&sayi);
	printf("\n");
	
	for(i=1;i<=sayi;i++)
{
	printf("%d.sinav notutu giriniz:",i);
	scanf("%d",&sinav[i]);
	
}

	printf("\n");
	for(i=1;i<=sayi;i++)
{
	toplam=toplam+sinav[i];
}
	printf("sinav notu toplamlari: %d",toplam);
	printf("\n");
	
	ort=(float)toplam/sayi;
	
	printf("sinav notlari ortalamasi: %.2f",ort);
	
	return 0;
}
