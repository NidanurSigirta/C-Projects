#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// strcpy ve strncpy

int main(int argc, char *argv[]) {
	
	char kaynak[40]="merhaba dunya";
	char kopya[40]="";
	
	strcpy(kopya,kaynak);
	printf("%s",kopya);
	

	
	return 0;
}
