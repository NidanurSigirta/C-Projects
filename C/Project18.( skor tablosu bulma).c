#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Bir futbol ma��nda 2'ler galibiyet, 1'ler beraberlik ve 0'lar ma�lubiyet anlam�na gelmektedir.
Galibiyetler=2 puan, Beraberlikler=1 puan ve Ma�lubiyetler=0 puand�r.
Bu tak�m�n k�me d��memesi i�in 12 puana ihtiyac� vard�r.*/

// Tak�m�n 10 haftal�k skor tablosuna g�re k�mede kal�p kalmad���n� ka� puan ald���n� g�steren program� yaz�n�z.

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
