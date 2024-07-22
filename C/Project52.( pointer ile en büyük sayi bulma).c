#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int max(int *a,int uzunluk)
{
	int i;
	int maks=a[0];
	
	for(i=1;i<uzunluk;i++)
	{
		if(a[i]>maks)
		{
			maks=a[i];
		}
	}
	return maks;
}
int main(int argc, char *argv[]) {
	
	int sayilar[5]={3,4,42,100,1};
	
	int maks=max(sayilar,5);
	
	printf("dizinin en buyuk elemani %d dir",maks);
	
	
	
	return 0;
}
