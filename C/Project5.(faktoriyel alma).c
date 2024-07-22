#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//faktoriyel hesaplama

int main(int argc, char *argv[]) {
	
	int sayi,faktoriyel=1,i;
    
    printf("lutfen faktoriyeli alinacak olan sayiyi seciniz:");
    scanf("%d",&sayi);
    
    for(i=1;i<=sayi;i++)
    {
    	faktoriyel=faktoriyel*i;
	}
    
    printf("%d sayisinin faktoriyeli: %d",sayi,faktoriyel);
	return 0;
}
