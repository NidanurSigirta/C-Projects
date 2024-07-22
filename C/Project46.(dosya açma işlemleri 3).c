#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	FILE *belge;  
	char karakter[50];
	
	belge=fopen("C:\\Users\\dell\\Desktop\\belgw.txt","r");
	
	fgets(karakter,12,belge);  // dosyadaki karakterden sadece 12 karakteri alýyoruz
	puts(karakter);
	fclose(belge);
	
	return 0;
}
