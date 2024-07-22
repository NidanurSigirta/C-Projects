#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Bir futbol maçýnda 2'ler galibiyet, 1'ler beraberlik ve 0'lar maðlubiyet anlamýna gelmektedir.
Galibiyetler=2 puan, Beraberlikler=1 puan ve Maðlubiyetler=0 puandýr.
Bu takýmýn küme düþmemesi için 12 puana ihtiyacý vardýr.*/

// Takýmýn 10 haftalýk skor tablosuna göre kümede kalýp kalmadýðýný kaç puan aldýðýný gösteren programý yazýnýz.

int main(int argc, char *argv[]) {
	
	int skor[10]={2,1,0,0,2,1,1,2,1,0};
	int i,puan=0;
	
	for(i=0;i<10;i++)
	{
		if(skor[i]==2)
		{
			puan=puan+3;
		}
		if(skor[i]==1)
		{
			puan=puan+1;
		}
		
	}
	if(puan>=12)
	{
		printf("puaniniz %d ligte kaldiniz",puan);
	}
	else
	{
		printf("%d puan ile kume dustunuz",puan);
	}
	
	return 0;
}
