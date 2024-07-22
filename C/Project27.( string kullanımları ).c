#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// string kullanýmlarý

int main(int argc, char *argv[]) {
	
	char kitap[40];
	printf("kitap adi:");
	scanf("%s",&kitap);
	
	printf("%s",kitap);
	printf("\n");
	
	printf("%18s",kitap);   // kitap adýnýn harf sayýsý da dahil olmak üzere 18 karakterlik alan içinde yaz, fazla alaný baþýna boþluk olarak ekle
	printf("\n");
	
	printf("%20.5s",kitap);  // 20 karakterlik alan içinde yaz ancak kitap adýnýn sadece ilk 5 harfini kullanarak.Geri kalanýný baþa boþluk olarak yaz
	printf("\n");
	
	printf("%-20s",kitap);  //20 karakterlik alan içinde yaz ancak bu defa boþluðu baþa(sola) deðil sona(saða) koy
	
	return 0;
}
