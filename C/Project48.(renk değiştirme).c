#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// RENK DE���T�RME

/* 0=BLACK      A=L�GHT GREEN
1=BLUE          B=L�GHT AQUA
2=GREEN         C=L�GHT RED
3=AQUA          D=L�GHT PURPLE
4=RED           E=L�GHT YELLOW
5=PURPLE        F=BR�GHT WH�TE
6=YELLOW
7=WH�TE
8=GRAY
9=L�GHT BLUE
*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Turkish");
	printf("Yine bir yabanc� gibiydik");
	
	system("COLOR D");
	return 0;
}
