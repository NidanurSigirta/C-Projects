#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void atm(){
printf("*****GENC ATM *****\n\n");
printf("1-Bakiye Sorgulama\n");
printf("2-Para �ekme\n");
printf("3-Para YatIrma\n");
printf("4-Kart iade\n\n");
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Turkish");
	
	int islem,cek,yatir;
	int sifre=1234;
	int bakiye=10896;
	
	yeniden:
	printf("L�tfen kart �ifrenizi giriniz:");
	scanf("%d",&sifre);
	printf("\n");
	
	if(sifre==1234)
	{
	    printf("Kart �ifreniz do�rudur i�lemlere devam edebilirsiniz\n\n");
	}
	else
	{
		printf("�ifreniz yanl��!! L�tfen tekrar deneyiniz\n");
		goto yeniden;
	}
	
	atm();
	
	while(islem!=4)
	{
	printf("L�tfen yapmak istedi�iniz i�lemi se�iniz:");
    scanf("%d",&islem);
    
	switch(islem)
	{
		case 1:{	printf("G�ncel Bakiyeniz: %d\n\n",bakiye);
			break;
		}
	    case 2:{
		  
	    	printf("\nL�tfen �ekmek istedi�iniz para miktari�n� giriniz: ");
	    	scanf("%d",&cek);
	    	
	    	bakiye-=cek;
	    	
	    	if(cek<=10896)
	    	{
	    			printf("Yeni bakiye tutari�n�z: %d\n\n",bakiye);
			}
	        else
	        {
	        	printf("\n***Hesab�n�zda bu kadar para bulunamamaktad�r,l�tfen tekrar deneyiniz\n");
	        	
			}
			break;
		}
		case 3:{
			printf("\nL�tfen yat�rmak istedi�iniz para miktar�n� giriniz: ");
	    	scanf("%d",&yatir);
	    	
	    	bakiye+=yatir;
	    	
	    	printf("Yeni bakiye tutar�n�z: %d\n\n",bakiye);
		
			break;
		}
		case 4:{
			
			printf("\n\nL�tfen kart�n�z� kart giri� b�lmesinden al�n�z,iyi g�nler dileriz :)");
			break;
		}
	}
		}
	return 0;
}
