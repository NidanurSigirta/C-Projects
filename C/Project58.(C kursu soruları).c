//ÖDEV SORULARI
	/*
	
	1.Soru-->Kursun baþlarýnda char ile ilgili gördüðümüz bazý fonksiyonlar vardý(tolower,toupper,islower,isupper,isalpha,isalnum,isdigit)
	gibi, bunlardan herhangi 3 tanesini seçip kendiniz yazýnýz.(ASCII TABLODAN YARARLANABÝLÝRSÝNÝZ)
	
	2.Soru-->Kullanýcýnýn rastgele ürettiði pozitif bir sayýnýn(maksimum 5 basamaklý düþünebilirsiniz,döngü öðrenmediðimiz için gerisi sorun olabilir)
	kaç basamaklý olduðunu bulunuz.
	
	3.Soru-->Bir fiyat hesaplama programý yaptýðýnýzý düþünün, kullanýcýdan taksit isteyip istemediðini(buna göre belirli ek ücretler alýnacak),
	özel kartýnýn olup olmadýðýný(fiyat kesintisi yapýlacak) sorarak bir fiyat belirleyiniz.
	
	4.Soru-->Kullanýcýdan 3 adet üçgen kenar bilgisi alýnýz, bu kenarlara göre üçgen oluþturabilir mi bunu deðerlendiriniz.Üçgen oluþturma kurallarý
	için interneti kullanabilirsiniz
	4.SORU ÞARTI: kenarlar x,y,z ise----> x için |y-z|<x<y+z
										  y için |x-z|<y<x+z
	
	
	//1.SORU
/*	
	//isLower
	char ch;
	printf("lutfen bir karakter giriniz:");
	ch=getchar();//tek bir karakter degeri alir.
	if(ch>='a' && ch<='z'){
		printf("kucuk bir harftir.\n");
	}
	else{
		printf("kucuk bir harf degildir.\n");
	}
	
	//isUpper
	
	char ch;
	printf("lutfen bir karakter giriniz:");
	ch=getchar();//tek bir karakter degeri alir.
	if(ch>=65 && ch<=90){
		printf("buyuk bir harftir.\n");
	}
	else{
		printf("buyuk bir harf degildir.\n");
	}
	
	//isAlpha
	
	char ch;
	printf("lutfen bir karakter giriniz:");
	ch=getchar();//tek bir karakter degeri alir.
	if((ch>='A' && ch<='Z') || (ch>=97 && ch<=122)){
		printf("alfabetik.\n");
	}
	else{
		printf("alfabetik degildir.\n");
	}
	
	//isAlnum	
	char ch;
	printf("lutfen bir karakter giriniz:");
	ch=getchar();//tek bir karakter degeri alir.
	if((ch>='A' && ch<='Z') || (ch>=97 && ch<=122)||(ch>=48 && ch<=57)){
		printf("alfanumerik.\n");
	}
	else{
		printf("alfanumerik degildir.\n");
	}
	
	//isDigit
	
	char ch;
	printf("lutfen bir karakter giriniz:");
	ch=getchar();//tek bir karakter degeri alir.
	if(ch>=48 && ch<=57){
		printf("sayidir\n");
	}
	else{
		printf("sayi degildir.\n");
	}
	
	//toLower
	char ch;
	printf("lutfen bir karakter giriniz:");
	ch=getchar();//tek bir karakter degeri alir.
	if(ch>='A' && ch<='Z'){
		ch+=32;
		putchar(ch);//ch karakterini yazdýrmak icin.
	}
	else{
		printf("Girdiginiz deger buyuk bir harf degeri degildir.\n");
	}
	
	//toUpper
	
	char ch;
	printf("lutfen bir karakter giriniz:");
	ch=getchar();//tek bir karakter degeri alir.
	if(ch>='a' && ch<='z'){
		ch-=32;
		putchar(ch);//ch karakterini yazdýrmak icin.
	}
	else{
		printf("Girdiginiz deger kucuk bir harf degeri degildir.\n");
	}
*/	
	
	//2.SORU
/*	
	int sayi;//rastgele uretilecek sayi.
	srand(time(NULL));//her seferinde farkli sayi.
	sayi=rand()%100000;
	printf("Uretilen sayi:%d\n",sayi);
	if(sayi<10){
		printf("Sayi tek basamaklidir.\n");
	}
	else if(sayi<100){
		printf("Sayi iki basamaklidir.\n");
	}
	else if(sayi<1000){
		printf("Sayi uc basamaklidir.\n");
	}
	else if(sayi<10000){
		printf("Sayi dort basamaklidir.\n");
	}
	else if(sayi<100000){
		printf("Sayi bes basamaklidir.\n");
	}
	else{
		printf("Deger araligini gecen bir sayi girdiniz.\n");
	}
*/

	//3.SORU
/*	
	int fiyatTutar,taksitMiktari;
	char kullaniciCevabi;
	srand(time(NULL));
	fiyatTutar=rand()%2000;
	printf("Yaptiginiz alisveris tutari:%d TL\n",fiyatTutar);
	printf("Taksit ister misiniz(E-H):");
	kullaniciCevabi=getchar();
	if(kullaniciCevabi=='E'){
		printf("Kac taksit uygulanmasini istersiniz(3-6-9):");
		scanf("%d",&taksitMiktari);
		switch(taksitMiktari){
			case 3:
				fiyatTutar+=fiyatTutar*0.03;
				printf("%d taksit uygulandi",taksitMiktari);
				break;
			case 6:
				fiyatTutar+=fiyatTutar*0.06;
				printf("%d taksit uygulandi",taksitMiktari);
				break;
			case 9:
				fiyatTutar+=fiyatTutar*0.09;
				printf("%d taksit uygulandi",taksitMiktari);
				break;
			default:
				printf("Girdiginiz taksit miktari uygun olmadi.Taksit uygulanmiyor.\n");
		}
	}
	else{
		printf("Herhangi bir taksit uygulanmadi.\n");
	}
	printf("Musteri kartiniz var mi(E-H):");
	fflush(stdin);//bufferi temizlemek icin.
	kullaniciCevabi=getchar();
	if(kullaniciCevabi=='E'){
		fiyatTutar-=fiyatTutar*0.05;//yuzde 5
	}
	else{
		printf("Herhangi bir indirim uygulanmadi.\n");
	}
	printf("Total miktar:%d TL",fiyatTutar);
	*/
	
	//4.SORU
/*4.SORU ÞARTI: kenarlar x,y,z ise----> x için |y-z|<x<y+z
					y için |x-z|<y<x+z
					z için |x-y|<z<x+y
					x=3 y=5 z=4
	
	int x,y,z;
	printf("Lutfen sirasiyla x,y,z kenar bilgilerini giriniz:");
	scanf("%d%d%d",&x,&y,&z);
	
	if(abs(y-z)<x && x<y+z){
		if(abs(x-z)<y && y<x+z){
			if(abs(y-x)<z && z<x+y){
				printf("Girdiginiz kenar bilgilerine gore bir ucgen olusturulabilir.\n");
			}
			else{
				printf("Z kenari ucgen olusumunu engelliyor.\n");
			}
		}
		else{
			printf("Y kenari ucgen olusumunu engelliyor.\n");
		}
	}
	else{
		printf("X kenari ucgen olusumunu engelliyor.\n");
	}
*/	
