#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct kayit{
	
	char ad[40];
	char soyad[40];
	int no;
	int sinif;
	float ort;
};

struct kayit ogr;

int main(int argc, char *argv[]) {
	
	printf("AD:");
	scanf(" %s",&ogr.ad);
	
	printf("SOYAD: ");
	scanf(" %s",&ogr.soyad);
	
	printf("NO: ");
	scanf(" %d",&ogr.no);
	
	printf("SiNiF:");
	scanf(" %d",&ogr.sinif);
	
	printf("ORT: ");
	scanf("%f",&ogr.ort);
	
	printf("\n\n");
	
	printf("AD: %s\n",ogr.ad);
	printf("SOYAD: %s\n",ogr.soyad);
	printf("NO: %d\n",ogr.no);
	printf("SiNiF: %d\n",ogr.sinif);
	printf("ORT: %f",ogr.ort);
	
	
		return 0;
}
