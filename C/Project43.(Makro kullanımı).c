#include <stdio.h>
#include <stdlib.h>
#define Maksimum(s1,s2) (s1>s2) ? s1 : s2  
// s1 ve s2 diye 2 sayý al s1 s2 den büyük mü ? karþýlaþtýr 
// büyükse s1'i ver deðilse s2'yi ver
// soru iþareti tek olursa s1 ve s2 yi yazdýrmaz sadece s1 s2 den büyükse true anlamýnda 1,deðilse false anlamýnda 0 verir

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("%d\n",Maksimum(10,7));
	
	return 0;
}
