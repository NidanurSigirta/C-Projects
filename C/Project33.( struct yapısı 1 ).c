#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// struct yapýsý

struct kitapbilgi{
	
	char kitapadi[40];
	char kitapyazar[40];
	int fiyat;
	float puan;
};

int main(int argc, char *argv[]) {
	
	struct kitapbilgi kb={ "Sekerportakali","Vasconceulos",10,7.25};
	
	printf("kitapadi: %s\n",kb.kitapadi);
	printf("kitapyazar: %s\n",kb.kitapyazar);
	printf("fiyat: %d\n",kb.fiyat);
	printf("puan: %.2f\n",kb.puan);
	
	
	
	return 0;
}
