#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int k;
	int dizi[5];
	
	printf("Lutfen 5 sayi giriniz: \n");
	
	for(k=0;k<=4;k++)
	{
		scanf("%d",&dizi[k]);
	}
	printf("\n\n");
	printf("Girilen sayilarin tersi: \n\n");
	
	for(k=4;k>=0;k--)
	{
		printf("%d\n",dizi[k]);
	}
	return 0;
}
