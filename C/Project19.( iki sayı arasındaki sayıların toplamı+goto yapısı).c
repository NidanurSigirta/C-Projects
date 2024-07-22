#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// klavyeden alýnan birbirinden farklý iki sayý dahil olmak üzere aralarýndaki sayýlarý toplayan programý yazýnýz

int main(int argc, char *argv[]) {
	
	int sayi1,sayi2,buyuk,kucuk,i;
	int toplam=0;
	
	yeniden:
	printf("lutfen birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	
	printf("lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	if(sayi1==sayi2)
	{
		printf("\n*lutfen birbirinden farkli sayilar giriniz!\n\n");
		goto yeniden;
	}
	else
	{
		if(sayi1>sayi2)
		{
			buyuk=sayi1;
			kucuk=sayi2;
		}
		else
		{
			buyuk=sayi2;
			kucuk=sayi1;
		}
	}
	
	for(i=kucuk;i<=buyuk;i++)
	{
		toplam=toplam+i;
	}
	
	printf("toplam: %d",toplam);
	
	return 0;
}
