#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i,dizi[n];
	int *pt;
	
	printf("Kac sayi girmek istediginizi giriniz:");
	scanf("%d",&n);
	
	pt=&dizi[0];
	
	printf("**%d adet sayi giriniz lutfen \n",n);
	for(i=0;i<n;i++)
	{
		printf("%d.sayi :",i+1);
		scanf("%d",pt);
		pt++;
	}
	
	printf("\n");
	
	pt=&dizi[n-1];
	
	printf("Girilen sayilari tersten sirala\n");
	
	for(i=n;i>0;i--)
	{
	printf("\nsayi %d: %d",i,*pt);
	pt--;
	}
		return 0;
}
