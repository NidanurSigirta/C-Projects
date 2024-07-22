#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int max,min,i,j,bolunmeSorgusu;
printf("lutfen bir deger araligini giriniz(min-max)seklinde:");
scanf("%d%d",&min,&max);

if(min==1)
{
	min++;
}
printf("%d ile %d arasindaki asal sayilar\n",min,max);
for(i=min;i<=max;i++)
{	bolunmeSorgusu=0;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			bolunmeSorgusu=1;
			break;
		}
	}
if(!bolunmeSorgusu)
	{
		printf("%d\n",i);
		}	
}
	return 0;
}
