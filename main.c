#include <stdio.h>
#include <stdlib.h>

void acilismetni();
void kapidaodeme();
void siparisadres();
int main() 
{
	
	int hesap;
	int i,secilen,c=1,a[9],tutar[6],tutar2[3];
	for(i=0;i<9;i++)
	a[i]=0;
	
	char items[6][100]={"Margarita Pizza","4 Peynirli Pizza","Pepperoni Pizza","Supreme Pizza","Mantarli Pizza","White Pizza",};
	char itemsicecek[3][100]={"Kola","Ayran","Su"};
	acilismetni();
	while(1)
	{
	if(c==1);
	{
		printf("");
		printf(" 1-Pizzalar \n 2-icecekler \n Pizza secmek icin 1'i, icecek secmek icin 2'yi tuslayiniz. \n");
		scanf("%d",&secilen);
		
		if(secilen<1 || secilen>2)
		{
			printf("\n Lutfen gecerli bir deger giriniz! \n");
			return;
		}
		
		switch(secilen)
		{
			case 1:
			{
				int secilenpizza;
				printf(" 1-Margarita Pizza \n 2-4 Peynirli Pizza \n 3-Pepperoni Pizza \n 4-Supreme Pizza \n 5-Mantarli Pizza \n 6-White Pizza \n Lutfen siparis etmek istediginiz pizzayi tuslayiniz:");
				scanf("%d",&secilenpizza);
				if(secilenpizza<1 || secilenpizza>6)
				{
					printf("\n Lutfen gecerli bir deger giriniz");
					return;
				}
				tutar[0]=50;
				tutar[1]=70;
				tutar[2]=60;
				tutar[3]=75;
				tutar[4]=45;
				tutar[5]=80;
				switch(secilenpizza)
				{
					case 1:
					{
						int num;
						printf("Margarita Pizza'yi sepetinize eklemek icin 1'e tiklayiniz.");
						scanf("%d",&num);
						if(num==1)
						{
							a[0]++;
							hesap+=50;
						}
						printf("Siparis tutariniz %d Tldir.",hesap);
						break;
					}
					case 2:
					{
						int num;
						printf("Peynirli Pizza'yi sepetinize eklemek icin 1'e tiklayiniz.");
						scanf("%d",&num);
						if(num==1)
						{
							a[1]++;
							hesap+=70;
						}
						printf("Siparis tutariniz %d Tldir.",hesap);
						break;
					}
					case 3:
					{
						int num;
						printf("Pepperoni Pizza'yi sepetinize eklemek icin 1'e tiklayiniz.");
						scanf("%d",&num);
						if(num==1)
						{
							a[2]++;
							hesap+=60;
						}
						
						printf("Siparis tutariniz %d Tldir.",hesap);
						break;
					}		
					case 4:
					{
						int num;
						printf("Supreme Pizza'yi sepetinize eklemek icin 1'e tiklayiniz.");
						scanf("%d",&num);
						if(num==1)
						{
							a[3]++;
							hesap+=75;
						}
						
						printf("Siparis tutariniz %d Tldir.",hesap);
						break;
					}	
					case 5:
					{
						int num;
						printf("Mantarli Pizza'yi sepetinize eklemek icin 1'e tiklayiniz.");
						scanf("%d",&num);
						if(num==1)
						{
							a[4]++;
							hesap+=45;
						}
					
						printf("Siparis tutariniz %d Tldir.",hesap);
						break;
					}		
					case 6:
					{
						int num;
						printf("White Pizza'yi sepetinize eklemek icin 1'e tiklayiniz.");
						scanf("%d",&num);
						if(num==1)
						{
							a[5]++;
							hesap+=80;
						}
						hesap+=80;
						printf("Siparis tutariniz %d Tldir.",hesap);
						break;
					}	
					
				}
					
					
					
			break;
			}
			case 2:
			{
			
				int secilenicecek;
				printf(" 1-Kola \n 2-Ayran \n 3-Su \n");
				scanf("%d",&secilenicecek);
				if(secilenicecek<1 || secilenicecek>3)
				{
					printf("Lutfen gecerli bir deger giriniz!");
					return;
				}
				tutar2[0]=15;
				tutar2[1]=10;
				tutar2[2]=5;
				switch(secilenicecek)
				{
					case 1:
						{
						int num;
						printf("Kola'yi sepetinize eklemek icin 1'e tiklayiniz.");
						scanf("%d",&num);
						if(num==1)
						{
							a[6]++;
							hesap+=15;
						}
						
						printf("Siparis tutariniz %d Tldir.",hesap);
						break;
						}
					case 2:
					{
						int num;
						printf("Ayrani sepetinize eklemek icin 1'e tikayiniz.");
						scanf("%d",&num);
						if(num==1)
						{
							a[7]++;
							hesap+=10;
						}
						
						printf("Siparis tutariniz %d Tldir.",hesap);
						break;
					}
					case 3:
					{
						int num;
						printf("Suyu sepetinize eklemek icin 1'e tiklayiniz.");
						scanf("%d",&num);
						if(num==1)
						{
							a[8]++;
							hesap+=5;
						}
						
						printf("Siparis tutariniz %d Tldir.",hesap);
						break;
					}
					default:
					{
						printf("\nİcecek ekranindan cik");
						break;
					}	
				}
			break;
			}
		}
		
		printf("\n Odeyeceginiz Tutar: %d",hesap);
		printf("\n Sepetinize baska bir urun eklemek icin 1'e basiniz,islemi sonlandirmak icin herhangi bir tusa basiniz.");
		scanf("%d",&c);
					
		}
		if(c!=1)
		break;
		
	}
	
	
	
	while(1)
	{
	printf("\n Online odeme icin 1'e kapida odeme icin 2'ye basiniz.\n");
	int odemesecimi;
	scanf("%d",&odemesecimi);
	if(odemesecimi==1)
	odemeyontemi();
	else if(odemesecimi==2)
	kapidaodeme();

	FILE*dosya;
	int f=0;
	dosya=fopen("adresbelge.txt","r");
	if(dosya==NULL)
		printf("Dosya bulunamadi!!");
	else
	{
		do
		{
			f=getc(dosya);
			putchar(f);
			
		} while (f!=EOF);
		
	}

	printf("\n\n -----Siparisiniz Hazirlaniyor-----\n\n");
	printf("-Urun Sistemimizde Kayitli Olan Adrese Teslim Edilecektir-");
	

	

	int cikis;
	printf("\n Sistemden cikmak icin 1'i tuslayiniz.\n");
	scanf("%d",&cikis);
	if(cikis==1)
	break;
	}
	
	return 0;
	}

	void acilismetni()
	{
		char isim[30];
		printf("Lutfen adinizi yaziniz: \n");
		gets(isim);
		printf("Sayin %s, online siparis sistemimize hosgeldiniz! \n",isim);
	}
	
	
	int odemeyontemi(int odemesecimi)
{
	if(odemesecimi==1);
	{
		int kartnumarasi,sonktarih,ccvkod;
		printf("Kart numarasini giriniz: \n");
		scanf("%d",&kartnumarasi);
		printf("Son kullanma tarihini giriniz: \n");
		scanf("%d",&sonktarih);
		printf("Ccv kodunu giriniz: \n");
		scanf("%d",&ccvkod);
		printf("%d,%d,%d",kartnumarasi,sonktarih,ccvkod);
	}
	
	
	
	
}	
void kapidaodeme()
{
	printf(" \n Siparis ucreti urun teslim edildiginde kapida odenecektir.\n\n");
}

