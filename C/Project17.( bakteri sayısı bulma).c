#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// bir bakteri t�r� her saat ba�� kendini ikiye b�lerek �o�almaktad�r.Bu laboratuvarda 24 saat sonra ka� tane bakteri olur?

int main(int argc, char *argv[]) {
	
	int bakteri=1;
	int i;
	for(i=1;i<=24;i++)
	{
		bakteri=bakteri*2;	
	}
	printf("bakteri sayisi : %d",bakteri);
	return 0;
}
