#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// puts-gets yapýsý
// scanf boþluktan sonraki cümleyi almadýðý için uzun cümle gerektiren yerlerde kullanýlýr

int main(int argc, char *argv[]) {
	
	char bilgi[100];
	printf("lutfen bilgiyi giriniz:");
	gets(bilgi);
	printf("\n");
	puts(bilgi);
	
	return 0;
}
