#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//3 s�nav ve 1 proje notu girilen ��rencinin ortalamas�na g�re harf notunu giriniz
//ort<50->FF , ort 50-60 aras�nda-> DD,  ort 60-70 aras�nda-> CC,  ort 70-85->BB ,  ort 85-100 aras�nda->AA

int main(int argc, char *argv[]) {
		
		int s1,s2,s3,p; //s�nav1,s�nav2,s�nav3,proje,ortalama
		float ort;
		
		printf("Lutfen birinci sinav notunuzu giriniz:");
		scanf("%d",&s1);
		
		printf("Lutfenikinci sinav notunuzu giriniz:");
		scanf("%d",&s2);
		
		printf("Lutfen ucuncu sinav notunuzu giriniz:");
		scanf("%d",&s3);
		
		printf("Lutfen proje notunuzu giriniz:");
		scanf("%d",&p);
		
		ort=(s1+s2+s3+p)/4;
		
		printf("\nOrtalama: %.2f\n\n",ort);
		
		if(ort<50)
		{
			printf("Harf notunuz-> FF");
		}
		else if( ort>=50 && ort<60)
		{
			printf("Harf notunuz->DD");
		}
		else if( ort>=60&&ort<70)
		{
			printf("Harf notunuz->CC");
		}
		else if(  ort>=70&&ort<85)
		{
			printf("Harf notunuz->BB");
		}
		else if( ort>=85&&ort<=100 )
		{
			printf("Harf notunuz-> AA");
		}
		
		
	return 0;
}
