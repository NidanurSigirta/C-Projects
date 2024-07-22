#include <stdio.h>
#include <stdlib.h>
#include<math.h>    //sqrt fonksiyonu için kullanýlmýþtýr
#define ogrsayi 4  //öðrenci sayýsýný buradan  deðiþtirebilirsiniz

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void listele();   // kayýtlarý baþarý sýrasýna göre sýralamak için kullanýlan fonksiyondur

void cikis() {

	printf("---CIKIS---\n\n");
	printf("* C dili ile yazilmis bu program ogrenci kayitlarini yonetmek icin menu odakli olusturulmus bir sistemdir.\n\n");
	printf("* Programda diziler,donguler,kontrol yapilari,aritmetik islemler ve 3 tane fonksiyon kullanilmistir.\n ");

}


void kayit() {

	printf("MENU \n");
	printf("1-Kayit Ekle \n");
	printf("2-Kayitlari listele \n");
	printf("3-Sinif basari notlarini hesapla \n");
	printf("4-Kayitlari basari notuna gore sirala \n");
	printf("5-Istatistiki bilgiler \n");
	printf("6-Cikis \n\n");
}

char harf[100];    //Öðrenci notunun sistemdeki harf notu
char durum[100];   //Öðrencinin harf notuna göre kalýp-geçme durumu
int sinav1[100];   //vize1 notu
int sinav2[100];   //vize2 notu
int final[100];    //final notu
char ad[10][100];
char soyad[15][100];
float notu[10];
float sinifort;   //notlara göre sýnýf ortalamasý
float oran;     //baþarý oraný
double sapma;   // standart sapma


int main(int argc, char* argv[]) {

	kayit();

	int secenek, i, j, ogrencisayi;

	int toplam;  // öðrenci notlarýnýn toplamý


	printf("--> Menu de hangi numarali islemi yapmak istediginizi giriniz:");
	scanf("%d", &secenek);


	while (secenek != 1)
	{
		printf("*Kayit eklemeden diger isleme gecilemiyor lutfen tekrar deneyiniz:\n"); //1 tuþuna basmak zorunludur kayýt eklenmeden iþlem yapýlamaz
		scanf("%d", &secenek);
	}


	if (secenek != 1)
	{
		printf("*Kayit eklemeden diger isleme gecilemiyor lutfen tekrar deneyiniz \n\n");
	}
	else {

		for (i = 1; i <= ogrsayi; i++)   //1 den baþlayýp öðrenci sayýsýna kadar döngü ile ad soyad ve notlar girilir 
		{


			switch (secenek)
			{
			case 1:
			{
				printf("\n---Kayit Ekle--- \n");
				printf("Adi :");
				scanf("%s", &ad[i]);
				printf("Soyadi :");
				scanf("%s", &soyad[i]);
				printf("1.Ara sinav, 2.Ara sinav, Final :");
				scanf("%d %d %d", &sinav1[i - 1], &sinav2[i - 1], &final[i - 1]);
				break;
			}

			}

		}
		printf("\n");
		printf("(Yeni bir kayit icin sinif mevcudu doludur !)\n\n");  //girilen öðrenci sayýsýndan fazla kayýt alýnamaz 
	}



	printf("Ad\tSoyad\tVize1\tVize2\tFinal");

	printf("\n\n");


	for (i = 1; i <= ogrsayi; i++)
	{
		for (j = 0; ad[i][j] != '\0'; j++)    // '\0' sonlandýrma karakteridir .Buna eþit olmadýðý için i deðiþkeni bitene kadar devam eder ad yazdýrma iþlemi
		{
			printf("%c", ad[i][j]);
		}

		printf(" \t");

		printf("%.1c.\t%d\t%d\t%d\t", soyad[i][0], sinav1[i - 1], sinav2[i - 1], final[i - 1]);
		printf("\n");

	}


	printf("\n\n");

	printf("--> Bir islem numarasi seciniz lutfen:");
	scanf("%d", &secenek);


	while (secenek != 2)
	{
		printf("hatali sayi girisi tekrar deneyiniz:\n");
		scanf("%d", &secenek);
	}


	if (secenek != 2)
	{
		printf("hatali sayi girisi tekrar deneyiniz \n\n");
	}

	printf("\n");

	listele();  // menüdeki 2.seçeneði çaðýrmak için kullanýlan fonksiyondur



	while (secenek != 6)  //Seçenek 6 olmadýðý sürece tekrar iþlem uygulanabilir
	{
		printf("\n\nBaska bir islem yapmak istiyorsaniz tuslayiniz yoksa 6 ya basip cikiniz:");
		scanf("%d", &secenek);

		printf("\n");

		if (secenek == 3)
		{

			printf("\n---Sinif basari notlarini hesapla--- \n\n");
			printf("Ad\tSoyad\tNotu\n");

			for (i = 1; i <= ogrsayi; i++)
			{
				for (j = 0; ad[i][j] != '\0'; j++)
				{
					printf("%c", ad[i][j]);
				}

				printf(" \t");

				printf("%.1c.\t%.f", soyad[i][0], notu[i - 1]);
				printf("\n");


			}
		}

		printf("\n");

		if (secenek == 4)
		{
			printf("\n---Kayitlari Basari Notlarina Gore Sirala---\n\n");
			printf("Ad\tSoyad\tVize1\tVize2\tFinal\tNotu\tHarf\tDurumu\n");

			int  buyuknot;

			for (i = 1; i <= ogrsayi; i++)
			{
				for (j = 1; j <= ogrsayi - i; j++)
				{
					if (notu[j] > notu[j - 1])
					{
						buyuknot = notu[j];           //notlarýn deðerine göre büyükten küçüðe doðru sýralamak için yazýlmýþtýr
						notu[j] = notu[j - 1];
						notu[j - 1] = buyuknot;



					}
				}

			}

			for (i = 1; i <= ogrsayi; i++)
			{
				for (j = 0; ad[i][j] != '\0'; j++)
				{
					printf("%c", ad[i][j]);
				}

				printf("\t");
				printf("%.1c.\t%d\t%d\t%d\t%.f\t", soyad[i][0], sinav1[i - 1], sinav2[i - 1], final[i - 1], notu[i - 1], harf[i - 1], durum[i - 1]);

				if (90 <= notu[i - 1] && notu[i - 1] <= 100)
					printf("AA");
				else if (85 <= notu[i - 1] && notu[i - 1] < 90)
					printf("BA");
				else if (80 <= notu[i - 1] && notu[i - 1] < 85)
					printf("BB");
				else if (75 <= notu[i - 1] && notu[i - 1] < 80)
					printf("CB");
				else if (70 <= notu[i - 1] && notu[i - 1] < 75)
					printf("CC");
				else if (66 <= notu[i - 1] && notu[i - 1] < 70)
					printf("DC");
				else if (60 <= notu[i - 1] && notu[i - 1] < 65)
					printf("DD");
				else if (50 <= notu[i - 1] && notu[i - 1] < 60)
					printf("FD");
				else if (notu[i - 1] <= 49)
					printf("FF");

				printf("\t");

				if (notu[i - 1] >= 60)
					printf("Gecti", harf[i - 1]);
				else if (notu[i - 1] < 50)
					printf("Kaldi", harf[i - 1]);
				else if (notu[i - 1] < 60 && notu[i - 1] >= 50)
					printf("Sartli Gecti", harf[i - 1]);

				printf("\n");



			}

		}
		printf("\n");

		if (secenek == 5)
		{
			printf("\n---Istatistiki Bilgiler---\n\n");


			double enyukseknot = 0, endusuknot = 0, sayi;

			for (i = 0; i < ogrsayi; i++)
			{
				for (j = i + 1; j < ogrsayi; j++)
				{
					if (notu[j] > notu[i])
					{
						sayi = notu[j];
						notu[j] = notu[i];
						notu[i] = sayi;
					}
				}

			}
			enyukseknot = notu[0];
			endusuknot = notu[ogrsayi - 1];

			printf("Dizideki notlarin en buyugu :%.lf\n", enyukseknot);
			printf("Dizideki notlarin en kucugu %.lf\n", endusuknot);

			for (i = 1; i <= ogrsayi; i++)
			{
				toplam = toplam + notu[i - 1];   //notlarýn toplamý
			}

			sinifort = toplam / ogrsayi;
			printf("Sinif ortalamasi: %.lf", sinifort);

			printf("\n");

			int sayac = 0;

			printf("Ortalamaya esit ve ortalamadan yuksek olan not sayisi:");

			for (i = 1; i <= ogrsayi; i++)
			{
				if (notu[i - 1] >= sinifort)

					sayac++;    // ortalamaya eþit veya yüksek not sayýsýný hesaplýyor
			}

			printf(" %d", sayac);

			printf("\n");


			printf("Basari orani:yuzde ");

			oran = (float)100 / ogrsayi * sayac;  //baþarý oraný hesabý

			printf("%.f", oran);
			printf("\n");


			printf("standart sapma:");


			int a[10];
			float top = 0;  //sýnýf ortalamsý ile alýnan notun farkýnýn karesinin toplamlarýný hesaplýyor


			for (i = 1; i <= 2; i++) {

				a[i - 1] = (sinifort - notu[i - 1]);

			}

			for (i = 1; i <= 2; i++) {

				top = top + a[i - 1] * a[i - 1];

			}

			sapma = sqrt(top / (ogrsayi - 1));

			printf("%.2lf", sapma);

		}
	}


	if (secenek == 6)
	{
		cikis();
	}


	return 0;
}

void listele()
{

	int i, j;

	printf("\n---Kayitlari Listele---\n\n");
	printf("Ad\tSoyad\tVize1\tVize2\tFinal\tNotu\tHarf\tDurumu\n");


	for (i = 1; i <= ogrsayi; i++)
	{
		for (j = 0; ad[i][j] != '\0'; j++)
		{
			printf("%c", ad[i][j]);
		}

		notu[i - 1] = sinav1[i - 1] * 0.2 + sinav2[i - 1] * 0.3 + final[i - 1] * 0.5;



		printf("\t");
		printf("%.1c.\t%d\t%d\t%d\t%.f\t", soyad[i][0], sinav1[i - 1], sinav2[i - 1], final[i - 1], notu[i - 1], harf[i - 1], durum[i - 1]);

		if (90 <= notu[i - 1] && notu[i - 1] <= 100)
			printf("AA");
		else if (85 <= notu[i - 1] && notu[i - 1] < 90)
			printf("BA");
		else if (80 <= notu[i - 1] && notu[i - 1] < 85)
			printf("BB");
		else if (75 <= notu[i - 1] && notu[i - 1] < 80)
			printf("CB");
		else if (70 <= notu[i - 1] && notu[i - 1] < 75)
			printf("CC");
		else if (66 <= notu[i - 1] && notu[i - 1] < 70)
			printf("DC");
		else if (60 <= notu[i - 1] && notu[i - 1] < 65)
			printf("DD");
		else if (50 <= notu[i - 1] && notu[i - 1] < 60)
			printf("FD");
		else if (notu[i - 1] <= 49)
			printf("FF");

		printf("\t");

		if (notu[i - 1] >= 60)
			printf("Gecti", harf[i - 1]);
		else if (notu[i - 1] < 50)
			printf("Kaldi", harf[i - 1]);
		else if (notu[i - 1] < 60 && notu[i - 1] >= 50)
			printf("Sartli Gecti", harf[i - 1]);

		printf("\n");

	}
}