#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// strcat 

int main(int argc, char *argv[]) {
	
	char kitapAdi[30],yazar[30],kitapYazar[60];
	
	printf("kitapadi ve yazari giriniz:");
	scanf("%s%s",kitapAdi,yazar); 
	strcat(kitapYazar,kitapAdi);
	strcat(kitapYazar," ");
	strcat(kitapYazar,"<-->");
	strcat(kitapYazar,yazar);
	printf("\n\n");
	printf("%s",kitapYazar);
	return 0;
}
