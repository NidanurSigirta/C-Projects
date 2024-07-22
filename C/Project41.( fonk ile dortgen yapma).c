#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void dortgen(int uzun,int kisa){
	
	int i,j;
	
	for(i=0;i<uzun;i++)
	{
		for(j=0;j<kisa;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
	
	int u,k;
	printf("uzun ve kisa kenari giriniz:");
	scanf("%d %d",&u,&k);
	printf("\n");
	dortgen(k,u);
	
	return 0;
}
