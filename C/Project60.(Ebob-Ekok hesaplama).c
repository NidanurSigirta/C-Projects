#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//EBOB-EKOK HESAPLAMA
	
	int sayi1,sayi2,EBOB,EKOK;
	int sayac,buyukSayi,kucukSayi;
	
	printf("Lutfen EBOB-EKOK bulunacak iki adet sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	
	if(sayi1>sayi2){
		buyukSayi=sayi1;
		kucukSayi=sayi2;
	}
	else{
		buyukSayi=sayi2;
		kucukSayi=sayi1;
	}
	
	//EKOK:
	sayac=buyukSayi;
	while(1){
		if(sayac%buyukSayi==0 && sayac%kucukSayi==0){
			EKOK=sayac;
			break;
		}
		sayac++;		
	}
	
	//EBOB:
	sayac=kucukSayi;
	while(1){
		if(buyukSayi%sayac==0 && kucukSayi%sayac==0){
			EBOB=sayac;
			break;
		}
		sayac--;
	}
	printf("%d ve %d sayilarinin EBOB degeri:%d, EKOK degeri:%d",sayi1,sayi2,EBOB,EKOK);

	return 0;
}
