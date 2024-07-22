#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// switch case yapýsý ile hesap makinei oluþturma

int main(int argc, char *argv[]) {
	
int sayi1,sayi2,sonuc;
char islem;

printf("t:toplama,c:cikarma,a:carpma,b:bolme islemlerinden birini giriniz:");
scanf("%c",&islem);

printf("lutfen birinci sayiyi giriniz:");
scanf("%d",&sayi1);

printf("lutfen ikinci sayiyi giriniz:");
scanf("%d",&sayi2);


switch(islem)
{
	case 't':{
        sonuc=sayi1+sayi2;
		printf("toplama sonucu: %d",sonuc);   //printf("toplama sonucu: %d",s);
		break;
	}	
	case 'c':{
 sonuc=sayi1-sayi2;
		printf("cikarma sonucu: %d",sonuc);
			break;
	}
		
	
	case 'a':{
	 sonuc=sayi1*sayi2;
		printf("carpma sonucu: %d",sonuc);
			break;
	}
	
	case 'b':{
		if (sayi!=0)
		 sonuc=sayi1/sayi2;
		printf("bolme sonucu: %d",sonuc);
		else
		printf("sayi sifira bolunmez!!");
			break;

	}	
}

	return 0;
}

