#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *belge;  
	char karakter;
	belge=fopen("C:\\Users\\dell\\Desktop\\belgw.txt","r"); // r=read (okuma)  //belgw dosyasýnda yazan þeyi okuyor burada
	
	do{
		
		karakter=getc(belge);
		
		printf("%c",karakter);
	}
	 while(karakter!=EOF);
	 
	 fclose(belge);
	
	
	
	return 0;
}
