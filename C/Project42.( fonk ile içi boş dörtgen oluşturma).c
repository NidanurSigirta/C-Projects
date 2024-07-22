#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void dortgen(int en,int boy)
	{ 
		int i;
		int z;
		for(i=1;i<=boy;i++){
			for(z=1;z<=en;z++){
				if((i==1) || (i==boy) || (z==1) || (z==en) )
				{
				
				printf("*");
			}
			else {
			printf(" ");
			}
		
			}
			printf("\n");
		} 
		
		
	} 

int main(int argc, char *argv[]) {
	
	dortgen(4,4);
	
	return 0;
}
