#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void terscevir(char dizi[])
{
	int i,uzunluk,gecici;
	                             // O R Ý G A M Ý      Ý M A G Ý R O 
	uzunluk=strlen(dizi);
	
	for(i=0;i<uzunluk/2;i++)
	{
		gecici=dizi[i];
		dizi[i]=dizi[uzunluk -1-i];
		dizi[uzunluk-1-i]=gecici;
		
		
	}
}
int main(int argc, char *argv[]) {
	
	char text[200];
	
	printf("ters cevrilecek kelimeyi giriniz:\n");
	scanf("%s",&text);
	printf("\n");
	terscevir(text);
	printf("%s",text);
	return 0;
}
