#include <stdio.h>
#include <stdlib.h>
#define Maksimum(s1,s2) (s1>s2) ? s1 : s2  
// s1 ve s2 diye 2 say� al s1 s2 den b�y�k m� ? kar��la�t�r 
// b�y�kse s1'i ver de�ilse s2'yi ver
// soru i�areti tek olursa s1 ve s2 yi yazd�rmaz sadece s1 s2 den b�y�kse true anlam�nda 1,de�ilse false anlam�nda 0 verir

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("%d\n",Maksimum(10,7));
	
	return 0;
}
