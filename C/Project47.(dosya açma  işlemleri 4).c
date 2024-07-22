#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	FILE *metinbelgesi;  
	char veri1[20]="bilgisyar ";
	char veri2[20]="muhendisligi ";
	char veri3[20]="bolumu ";
	metinbelgesi=fopen("C:\\Users\\dell\\Desktop\\belgw.txt","w"); // w=write (yazma)
	
	fputs(veri1,metinbelgesi);
	fputs(veri2,metinbelgesi);
	fputs(veri3,metinbelgesi);

	
	return 0;
}
