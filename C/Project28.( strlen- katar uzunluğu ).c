#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// strlen fonksiyonu= katar uzunluðu hesaplamak için kullanýlýr

int main(int argc, char *argv[]) {
	
	char kelime[40];
	
	printf("cumleyi giriniz:");
	scanf("%s",&kelime);
	
	printf("katar uzunlugu : %d",strlen(kelime));
	return 0;
}
