#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int s1,s2,i,eb; // eb:en b�y�k
printf("lutfen ebobu alinacak sayilari giriniz:\n");
scanf("%d\n%d",&s1,&s2);
printf("\n");

for(i=2;i<=s1 && i<=s2;i++)  // burada k���k olan say�ya kadar i artacak
{
	if(s1%i==0 && s2%i==0)   // ikisini de ortak b�len say� gelince bunu eb'ye e�itleyecek .eb s�ras�yla d�ng� devam ettik�e ortak b�l�nen say�lara e�itlenecek en son ise en b�y���ne
	eb=i;

}
printf("%d ve %d ebobleri: %d",s1,s2,eb);
	return 0;
}
