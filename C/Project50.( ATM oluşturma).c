#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void atm(){
printf("*****GENC ATM *****\n\n");
printf("1-Bakiye Sorgulama\n");
printf("2-Para Çekme\n");
printf("3-Para YatIrma\n");
printf("4-Kart iade\n\n");
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Turkish");
	
	int islem,cek,yatir;
	int sifre=1234;
	int bakiye=10896;
	
	yeniden:
	printf("Lütfen kart þifrenizi giriniz:");
	scanf("%d",&sifre);
	printf("\n");
	
	if(sifre==1234)
	{
	    printf("Kart þifreniz doðrudur iþlemlere devam edebilirsiniz\n\n");
	}
	else
	{
		printf("Þifreniz yanlýþ!! Lütfen tekrar deneyiniz\n");
		goto yeniden;
	}
	
	atm();
	
	while(islem!=4)
	{
	printf("Lütfen yapmak istediðiniz iþlemi seçiniz:");
    scanf("%d",&islem);
    
	switch(islem)
	{
		case 1:{	printf("Güncel Bakiyeniz: %d\n\n",bakiye);
			break;
		}
	    case 2:{
		  
	    	printf("\nLütfen çekmek istediðiniz para miktariýný giriniz: ");
	    	scanf("%d",&cek);
	    	
	    	bakiye-=cek;
	    	
	    	if(cek<=10896)
	    	{
	    			printf("Yeni bakiye tutariýnýz: %d\n\n",bakiye);
			}
	        else
	        {
	        	printf("\n***Hesabýnýzda bu kadar para bulunamamaktadýr,lütfen tekrar deneyiniz\n");
	        	
			}
			break;
		}
		case 3:{
			printf("\nLütfen yatýrmak istediðiniz para miktarýný giriniz: ");
	    	scanf("%d",&yatir);
	    	
	    	bakiye+=yatir;
	    	
	    	printf("Yeni bakiye tutarýnýz: %d\n\n",bakiye);
		
			break;
		}
		case 4:{
			
			printf("\n\nLütfen kartýnýzý kart giriþ bölmesinden alýnýz,iyi günler dileriz :)");
			break;
		}
	}
		}
	return 0;
}
