#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// bir sinemada mýsýr 2tl,kola 2 tl,su 1tl ve bilet 8 tl dir.Ücreti bulan programý yazýnýz.

int main(int argc, char *argv[]) {
	
	int misir,kola,su,bilet,ucret;
	
	printf("Aldiginiz misir adedini giriniz:");
	scanf("%d",&misir);
	
	printf("Aldiginiz kola adedini giriniz:");
	scanf("%d",&kola);
	
	printf("Aldiginiz su adedini giriniz:");
	scanf("%d",&su);
	
	printf("Aldiginiz bilet adedini giriniz:");
	scanf("%d",&bilet);
	
	ucret=2*misir+2*kola+1*su+8*bilet;
	
	printf("\nUcretiniz: %d",ucret);
	
	return 0;
}
