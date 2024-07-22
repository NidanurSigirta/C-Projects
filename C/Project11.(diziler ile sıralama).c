#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 
 char sehir[3][15];
 int i;
 
 for(i=1;i<=3;i++)
 {
  printf("Sehirin ismini giriniz: ");
  scanf("%s",&sehir[i]);
  
 }
 
 printf("Girmis oldugunuz sehir isimleri: \n");
 
 for(i=1;i<=3;i++)
 {
  printf("%s\n",sehir[i]);
 }
	return 0;
}
