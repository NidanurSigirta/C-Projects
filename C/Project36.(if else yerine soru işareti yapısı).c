#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// ?: yapýsý

int main(int argc, char *argv[]) {
	
	int grade=100;
	
	printf( "%s\n",grade >= 60 ? "Dersi Gecti!": "Dersten Kaldý!");  // or     grade >= 60 ? printf(" Dersi Gecti!”) : printf(" Dersten Kaldý!");


	return 0;
}
