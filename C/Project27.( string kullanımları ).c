#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// string kullan�mlar�

int main(int argc, char *argv[]) {
	
	char kitap[40];
	printf("kitap adi:");
	scanf("%s",&kitap);
	
	printf("%s",kitap);
	printf("\n");
	
	printf("%18s",kitap);   // kitap ad�n�n harf say�s� da dahil olmak �zere 18 karakterlik alan i�inde yaz, fazla alan� ba��na bo�luk olarak ekle
	printf("\n");
	
	printf("%20.5s",kitap);  // 20 karakterlik alan i�inde yaz ancak kitap ad�n�n sadece ilk 5 harfini kullanarak.Geri kalan�n� ba�a bo�luk olarak yaz
	printf("\n");
	
	printf("%-20s",kitap);  //20 karakterlik alan i�inde yaz ancak bu defa bo�lu�u ba�a(sola) de�il sona(sa�a) koy
	
	return 0;
}
