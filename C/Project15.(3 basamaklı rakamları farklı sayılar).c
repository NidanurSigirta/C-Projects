#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 3 basamaklý rakamlarý birbirinden farklý kaç tane tam sayý olduðunu bulan programý yazýnýz

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
