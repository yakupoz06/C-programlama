#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int kitleindex(float boy,int kilo)
	{
		int sonuc = kilo/(boy*boy);
		printf("Vucut kitle indeksiniz = %d\n",sonuc);
	
		if(sonuc<18)
		{
			return 1;
		}
		else if(sonuc<25)
		{
			return 2 ;
		}
		else if(sonuc<30)
		{
			return 3 ;
		}
		else if(sonuc>30)
		{
			return 4 ;
		}
	}
	
	int kilo;
	float boy;
	int sonuc;
	
	printf("Boyunuzu giriniz=");
	scanf("%f",&boy);
	printf("Kilonuzu giriniz=");
	scanf("%d",&kilo);
	
	sonuc = kitleindex(boy,kilo);
	
	if (sonuc==1)
	{
		printf("Zayif");
	}
	else if (sonuc==2)
	{
		printf("Normal");
	}
	else if (sonuc==3)
	{
		printf("Kilolu");
	}
	else if (sonuc==4)
	{
		printf("Obez");
	}
	
	
	return 0;
}
