#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// puts-gets yap�s�
// scanf bo�luktan sonraki c�mleyi almad��� i�in uzun c�mle gerektiren yerlerde kullan�l�r

int main(int argc, char *argv[]) {
	
	char bilgi[100];
	printf("lutfen bilgiyi giriniz:");
	gets(bilgi);
	printf("\n");
	puts(bilgi);
	
	return 0;
}
