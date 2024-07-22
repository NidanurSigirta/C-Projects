#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*IO
input  --> giriþ
output --> çýkýþ
file   --> dosya /f
put    --> yazdýrma
get    --> okuma / alma
open   --> açma
close  --> kapatma
write  --> yazma /w
read   --> okuma /r
add    --> ekleme /a
fopen  --> dosya açma komutu
EOF    --> dosya sonu
fgets  --> toplu okuma
fputs  --> toplu yazma*/

int main(int argc, char *argv[]) {
	
	
	FILE *dosya;  // bunu bir gösterici olarak tanýmlýyoruz
	
	dosya=fopen("C:\\Users\\dell\\Desktop\\deneme.txt","w");  // ilk baþta dosya açma anlamýna gelen fopen yazýyoruz
	//ardýndan dosyanýn adresini yapýþtýrýyoruz ve açýlmasýný istedðimiz dosyanýn adýný yazýyoruz(deneme)
	// en sona ise yazma(write) anlamýna gelen w sembolünü koyuyoruz
	// ayrýca adres aralarýna çift slash koyuyoruz çünkü yazý içinde komut kullanmak istediðimizde"\n" tek slash kullanýyoruz ondan ayýrmak için
	
	/*þimdi bu dosyayý açtýk sýrada içine veri koyucaz*/
	
	putc('A',dosya);  // put yazdýrma demek c harfi de char'dan geliyor.dosyanýn içine a harfini yazdýrýcaz.
	
	//Eðer sözcük yazsaydýk string alamýna geldiði için puts kullanýrdýk   puts("nidanur",dosya);
		
	fclose(dosya); // yani dosyayý kapatýyoruz
	
	
	
	return 0;
}
