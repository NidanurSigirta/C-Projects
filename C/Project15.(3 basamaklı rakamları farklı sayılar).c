#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 3 basamakl� rakamlar� birbirinden farkl� ka� tane tam say� oldu�unu bulan program� yaz�n�z

int main(int argc, char *argv[]) {
	
	int a,b,c,i,sayac=0;

	for(i=100;i<=999;i++)
	{
		
	a=i/100;
	b=(i/10)%10;
	c=i%10;
		
	if(a!=b && a!=c && b!=c)
	{
	printf("%d\n",i);
	sayac++;
	}
	
	}
		printf("toplam sayi: %d",sayac);
	
	return 0;
}
