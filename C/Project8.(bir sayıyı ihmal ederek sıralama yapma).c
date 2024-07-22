#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 1 ile 20 arasýndaki çift sayýlarý listeleyen ama 14 ü almayan programý yazýnýz

int main(int argc, char *argv[]) {
	
	int i;
	
	for(i=1;i<=20;i++)
	{
		if(i==14)
        continue;
        if(i%2==0 )  // ya da continue olmadan && i!=14 eklenebilir
        {
        	printf("%d\n",i);
		}
       
	}
	return 0;
}
