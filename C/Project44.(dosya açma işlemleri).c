#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*IO
input  --> giri�
output --> ��k��
file   --> dosya /f
put    --> yazd�rma
get    --> okuma / alma
open   --> a�ma
close  --> kapatma
write  --> yazma /w
read   --> okuma /r
add    --> ekleme /a
fopen  --> dosya a�ma komutu
EOF    --> dosya sonu
fgets  --> toplu okuma
fputs  --> toplu yazma*/

int main(int argc, char *argv[]) {
	
	
	FILE *dosya;  // bunu bir g�sterici olarak tan�ml�yoruz
	
	dosya=fopen("C:\\Users\\dell\\Desktop\\deneme.txt","w");  // ilk ba�ta dosya a�ma anlam�na gelen fopen yaz�yoruz
	//ard�ndan dosyan�n adresini yap��t�r�yoruz ve a��lmas�n� isted�imiz dosyan�n ad�n� yaz�yoruz(deneme)
	// en sona ise yazma(write) anlam�na gelen w sembol�n� koyuyoruz
	// ayr�ca adres aralar�na �ift slash koyuyoruz ��nk� yaz� i�inde komut kullanmak istedi�imizde"\n" tek slash kullan�yoruz ondan ay�rmak i�in
	
	/*�imdi bu dosyay� a�t�k s�rada i�ine veri koyucaz*/
	
	putc('A',dosya);  // put yazd�rma demek c harfi de char'dan geliyor.dosyan�n i�ine a harfini yazd�r�caz.
	
	//E�er s�zc�k yazsayd�k string alam�na geldi�i i�in puts kullan�rd�k   puts("nidanur",dosya);
		
	fclose(dosya); // yani dosyay� kapat�yoruz
	
	
	
	return 0;
}
