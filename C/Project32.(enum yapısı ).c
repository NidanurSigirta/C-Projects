#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// enum yap�s�

enum sehirler{
	 
	 bos,adana,adiyaman,afyon,agri,amasya,ankara,antalya,artvin,aydin
};

int main(int argc, char *argv[]) {
	
	enum sehirler il;
	il=artvin;
	printf("%d",il);
	
	return 0;
}
