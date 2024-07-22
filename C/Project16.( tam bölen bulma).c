#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// klavyeden girilen sayýnýn tam bölenlerini bulan programý kodlayýnýz

int main(int argc, char *argv[]) {
	
	int sayi,i;
	
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	printf("\n*Sayinin tam bolenleri\n");
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
		
			printf("%d\n",i);
		}
	}
	return 0;
}
