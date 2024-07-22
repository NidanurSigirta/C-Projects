#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// yýldýzlar ile üçgen yapýmý
int main(int argc, char *argv[]) {
	
	int i,j;
	
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		
	}
	

	
	return 0;
}
