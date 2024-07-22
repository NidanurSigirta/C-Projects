#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// fibonacci serisi 1,1,2,3,5,8,13,21,34,55... tribonacci de bunun 3 lü hali 1,1,1,3,5,9,17,31,57...

int main(int argc, char *argv[]) {
	
	int a,b,c,k,l,m,n,j,i;
	
	printf("****FiBONACCi SERiSi****\n");
	
	a=1;
	b=1;
	
	printf("%d\n%d\n",a,b);
	
	for(i=1;i<=10;i++)
	{
	c=a+b;	
	a=b;
	b=c;
	printf("%d\n",c);
	}


		printf("\n\n****TRiBONACCi SERiSi****\n");
	
	k=1;
	l=1;
	m=1;
	
	printf("%d\n%d\n%d\n",k,l,m);
	
	for(j=1;j<=10;j++)
	{
	n=k+l+m;	
	k=l;
	l=m;
	m=n;
	
	printf("%d\n",n);
	}

	return 0;
}
