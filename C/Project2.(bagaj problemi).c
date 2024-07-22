#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*bir uçakta bagaj aðýrlýk sýnýrý 15 kg ,el aðýrlýk sýnýrý 8 kg dýr.
bu sýnýrlar aþýlýrsa kg baþý 5 tl ücretlendirme yapýlýyor.Bu programý yazýyoruz*/

int main(int argc, char *argv[]) {
	
	int bagaj,b,el,e,ucret; //b:bagaj-15,e:el-8
	
	printf("lutfen bagaj agirliginizi giriniz:");
	scanf("%d",&bagaj);
	
	printf("lutfen el agirliginizi giriniz:");
	scanf("%d",&el);
	
	if(bagaj>15)
	{
		b=bagaj-15;
	}
	if(el>8)
	{
		e=el-8;
	}
	
	ucret=(b+e)*5;
	
	if(bagaj>15 || el>8)
	{
			printf("Ceza yediniz ucret: %d",ucret);
	}
else
{
	printf("Iyi yolculuklar");
}
	
	return 0;
}
