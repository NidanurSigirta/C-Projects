#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 3 basamaklý sayýlaý basamaklarýna ayýran programý yazýnýz

int main(int argc, char *argv[]) {
	
	int sayi,a,b,c,i;
	
	printf("lutfen 3 basamakli sayi giriniz:");
	scanf("%d",&sayi);
	
	a=sayi/100;
	b=(sayi/10)%10;
	c=sayi%10;
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d",c);
	
	return 0;
}
