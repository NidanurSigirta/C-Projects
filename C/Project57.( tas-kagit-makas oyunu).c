#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));  //her seferinde farkl� say�lar �retmesini sa�lar
	
	int tahmin,i=0;
	int kullaniciskor=0,bilgisayarskor=0;
	
	while(i<5)
	{
		printf("L�tfen se�iminizi yap�n�z(1-ta�,2-ka��t,3-makas) :");
		scanf("%d",&tahmin);
	
		int bilgisayartahmini=(rand()%3)+1;
		if(tahmin==1)
		{
			if(bilgisayartahmini==1)
			{
				printf("Bilgisayar�n se�imi %d BERABERE\n\n",bilgisayartahmini);
			}
			else if(bilgisayartahmini==2)
			{
				printf("Bilgisayar�n se�imi %d KAYBETT�N�Z:(\n\n",bilgisayartahmini);
				bilgisayarskor++;
			}
			else if(bilgisayartahmini==3)
			{
				printf("Bilgisayar�n se�imi %d KAZANDINIZ:)\n\n",bilgisayartahmini);
				kullaniciskor++;
			}
			
		}
		
		
		else if(tahmin==2)
		{
			if(bilgisayartahmini==1)
			{
				printf("Bilgisayar�n se�imi %d KAZANDINIZ:)\n\n",bilgisayartahmini);
					kullaniciskor++;
			}
			else if(bilgisayartahmini==2)
			{
				printf("Bilgisayar�n se�imi %d BERABERE\n\n",bilgisayartahmini);
			}
			else if(bilgisayartahmini==3)
			{
				printf("Bilgisayar�n se�imi %d KAYBETT�N�Z:(\n\n",bilgisayartahmini);
					bilgisayarskor++;
			}
		
		}
		else if(tahmin==3)
		{
			if(bilgisayartahmini==1)
			{
				printf("Bilgisayar�n se�imi %d KAYBETT�N�Z:(\n\n",bilgisayartahmini);
					bilgisayarskor++;
			}
			else if(bilgisayartahmini==2)
			{
				printf("Bilgisayar�n se�imi %d KAZANDINIZ:)\n\n",bilgisayartahmini);
					kullaniciskor++;
			}
			else if(bilgisayartahmini==3)
			{
				printf("Bilgisayar�n se�imi %d BERABERE\n\n",bilgisayartahmini);
			}
			
		}
		else{
			printf("KURAL DI�I TAHM�N G�R���!!!\n");
		}
		i++;
		
	}
	
	printf("***Kullan�c� Skor: %d ***Bilgisayar Skor: %d",kullaniciskor,bilgisayarskor);
	
	
	return 0;
}
