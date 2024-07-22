#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi,i;
	int kontrol=0;
	
	printf("*****ASAL SAYI BULMA PROGRAMI*****\n\n");
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0 )
		{
			printf("Sayiniz asal degildir",i);
			kontrol=1;   
			break;
		}

	}
	if(kontrol==0)
	{
		printf("sayiniz asaldir");
	}
	
	return 0;
}
