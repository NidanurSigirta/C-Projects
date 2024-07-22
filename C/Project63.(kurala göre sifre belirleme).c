#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   int kucukHarfSorgu=0,buyukHarfSorgu=0,sayiSorgu=0,karakterSayisi=0;
	char ch;
	printf("Lutfen bir sifre giriniz:");
	do{
		ch=getchar();
		if(kucukHarfSorgu==0){
			if(islower(ch)){
				kucukHarfSorgu=1;
			}
		}
		if(buyukHarfSorgu==0){
			if(isupper(ch)){
				buyukHarfSorgu=1;
			}
		}
		if(sayiSorgu==0){
			if(isdigit(ch)){
				sayiSorgu=1;
			}
		}
		karakterSayisi++;
	}while(ch!='\n');
	
	if(kucukHarfSorgu && buyukHarfSorgu && sayiSorgu && karakterSayisi>=8 && karakterSayisi<=16){
		printf("Sifreniz kabul edilmistir.");
	}
	else{
		printf("Sifreniz kabul edilmemistir.");
	}
	return 0;
}
