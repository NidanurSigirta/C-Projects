#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*bir u�akta bagaj a��rl�k s�n�r� 15 kg ,el a��rl�k s�n�r� 8 kg d�r.
bu s�n�rlar a��l�rsa kg ba�� 5 tl �cretlendirme yap�l�yor.Bu program� yaz�yoruz*/

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
