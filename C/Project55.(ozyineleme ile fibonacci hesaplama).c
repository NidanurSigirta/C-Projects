#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long  fibonacci(int x){
	
	if(x<0){
		return -1;
	}
	
	if(x==1||x==0){
		
		return 1;
	}
	
	return fibonacci(x-1)+fibonacci(x-2);
}

int main(int argc, char *argv[]) {
	
	int sayi;
	for(sayi=0;sayi<999;sayi++){
		
		printf("fibonacci(%d)\t\t%5li\n",sayi,fibonacci(sayi));
	}
	
	return 0;
}
