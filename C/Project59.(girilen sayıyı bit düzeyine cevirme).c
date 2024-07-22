#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//BIT-DUZEYINE CEVIRME(0-1 DUZEYINE)
	
	int sayi,geciciSayi,i=0;
	char bitArray[32];
	
	printf("Lutfen bit duzeyine cevrilecek sayiyi giriniz:");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	
	while(geciciSayi!=0){
		if(geciciSayi%2==0){
			bitArray[i]='0';
		}
		else{
			bitArray[i]='1';
		}
		i++;
		geciciSayi/=2;
	}

	printf("%d sayisinin bit karsiligi:",sayi);
	while(i>=0){
		printf("%c",bitArray[i]);
		i--;
	}

	return 0;
}
