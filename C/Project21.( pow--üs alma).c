#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// pow=üs alma

int main(int argc, char *argv[]) {
	
	int sayi,us,taban,sonuc;
	
	printf("lutfen us giriniz: ");
	scanf("%d",&us);
	
	printf("lutfen taban giriniz: ");
	scanf("%d",&taban);
	
	sonuc=pow(us,taban);
	
	printf("sonuc: %d",sonuc);
	
	return 0;
}
