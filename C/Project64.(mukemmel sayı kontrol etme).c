#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   
    int i,j,toplam;

	for(i=1;i<=100;i++) 
	{
		toplam=0;
		for(j=1;j<i;j++)
		{
		if(i%j==0)
		{
		 toplam+=j;
		
		}
		
	   }
	
	if(toplam==i)
	{
		printf("%d sayisi mukemmel bir sayidir\n",i);
	}
	}
	return 0;
}
