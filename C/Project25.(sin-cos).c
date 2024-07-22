#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double derece,sonuc1,sonuc2;
	
	printf("lutfen bir derece giriniz:");
	scanf("%lf",&derece);
	
	sonuc1=sin(derece);
	sonuc2=cos(derece);
	
	printf("sonuc1: %.4lf\n",sonuc1);

	printf("sonuc2: %.4lf",sonuc2);
	
	
	return 0;
}
