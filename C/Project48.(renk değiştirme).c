#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// RENK DEÐÝÞTÝRME

/* 0=BLACK      A=LÝGHT GREEN
1=BLUE          B=LÝGHT AQUA
2=GREEN         C=LÝGHT RED
3=AQUA          D=LÝGHT PURPLE
4=RED           E=LÝGHT YELLOW
5=PURPLE        F=BRÝGHT WHÝTE
6=YELLOW
7=WHÝTE
8=GRAY
9=LÝGHT BLUE
*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Turkish");
	printf("Yine bir yabancý gibiydik");
	
	system("COLOR D");
	return 0;
}
