#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	
	//BOÞLUK SAYISI BELÝRLEME KODU
	char ch;
	int boslukSayisi=0;
	printf("Lutfen bosluk sayisi belirlenecek cumleyi giriniz.");
	do{
		ch=getchar();//karakter alma.
		if(ch==' '){
			boslukSayisi++;
		}	
	}while(ch!='\n');
	
	printf("Girdiginiz cumlede %d adet bosluk karakteri gecmektedir.\n",boslukSayisi);

	
	
	return 0;
}
