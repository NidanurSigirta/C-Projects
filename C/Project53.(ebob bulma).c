#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int s1,s2,i,eb; // eb:en büyük
printf("lutfen ebobu alinacak sayilari giriniz:\n");
scanf("%d\n%d",&s1,&s2);
printf("\n");

for(i=2;i<=s1 && i<=s2;i++)  // burada küçük olan sayýya kadar i artacak
{
	if(s1%i==0 && s2%i==0)   // ikisini de ortak bölen sayý gelince bunu eb'ye eþitleyecek .eb sýrasýyla döngü devam ettikçe ortak bölünen sayýlara eþitlenecek en son ise en büyüðüne
	eb=i;

}
printf("%d ve %d ebobleri: %d",s1,s2,eb);
	return 0;
}
