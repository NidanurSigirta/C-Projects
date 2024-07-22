#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void listele()
{
printf("***toplama islemi ve kup bulma***\n");    // geri deðer döndürmeyen
}

int toplam(int s1,int s2)   //geri deðer döndüren
{
	int s3;
	s3=s1+s2;
	return s3;
}

int kupbul(int sayi){
	
	int sonuc;
	sonuc=sayi*sayi*sayi;
	return sonuc;
}

int main(int argc, char *argv[]) {
	
listele();
	
	int t;
	t=toplam(4,5);
	printf("%d\n",t);
	
	int s;
	printf("sayiyi giriniz:");
	scanf("%d",&s);
	printf("%d",kupbul(s));
	return 0;
}
