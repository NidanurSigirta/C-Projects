#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi,fakt=1;
	
	printf("lutfen sayiyi giriniz:");
	scanf("%d",&sayi);
	
while(sayi>0)
{
	fakt=fakt*sayi;
	sayi--;
}
printf("faktoriyel: %d",fakt);


	return 0;
}
