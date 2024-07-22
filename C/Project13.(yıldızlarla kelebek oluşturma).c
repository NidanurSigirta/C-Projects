#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// uzunluðu 5 br olan yýldýzlarla kelebek oluþturma
int main(int argc, char *argv[]) {
	
	int i,j;
	
	for(i=1;i<=5;i++)
	{
	 for(j=1;j<=i;j++)
	 {
	 	printf("*");
	 }
	for(j=1;j<=5-i;j++)
	{
		printf(" ");
	}
	
	for(j=1;j<=5-i;j++)
	{
		printf(" ");
	}
	
	for(j=1;j<=i;j++)
	 {
	 	printf("*");
	 }
	
	printf("\n");
	
	}
	
	for(i=5;i>=1;i--)
	{
	 for(j=1;j<=i;j++)
	 {
	 	printf("*");
	 }
	for(j=1;j<=5-i;j++)
	{
		printf(" ");
	}
	
	for(j=1;j<=5-i;j++)
	{
		printf(" ");
	}
	
	for(j=1;j<=i;j++)
	 {
	 	printf("*");
	 }
	
	printf("\n");
	
	}

	return 0;
}
