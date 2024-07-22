#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void yerel_degisken();// ilk deger hali ne ise �yle devam eder de�i�mez
void yerel_static_degisken(); // static de�er ise de�i�en de�eri tutar ve yeni de�eri o yapar 
void global_degisken();  // bir fonksiyon i�inde �zel olarak tan�mlanmayan b�t�n de�i�kenler globald�r

int x=1;  //global de�i�ken tan�mlam�� olduk.mainin d���nda tan�mlad���m�z de�i�kenler global olur

int main(int argc, char *argv[]) {
	
	int x=10;
	
	printf("main fonksyonundaki x degiskeni: %d\n",x);
	
	{ // bir adet scope a�m�� olduk
	
		int x=7;
		printf("scope icindeki x degiskeni: %d\n",x);
		x++;
		printf("scope icindeki artan x degiskeni: %d\n",x);
	}
	
	printf("main fonksiyonundaki x degiskeni: %d\n",x);
	
	yerel_degisken();
    yerel_static_degisken();
    yerel_degisken();
    global_degisken();
    yerel_static_degisken();
    global_degisken();
 
	return 0;
}

void yerel_degisken(){
	
	int x=30;
	printf("yerel degisken x:%d\n",x);
	x*=20;
	printf("yerel degisken carp�m hali :%d\n",x);
}
void yerel_static_degisken(){
	
	static int x=50;
	printf("yerel static int x degeri: %d\n",x);
	x++;
	printf("yerel static int artan x degeri:%d\n",x);
	
}
void global_degisken(){
	
	printf("global degisken x degeri: %d\n",x);
	x-=100;
	printf("global degisken azalan x degeri :%d\n",x);
	
}


























