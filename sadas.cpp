#include<stdio.h>
int Basamakla(long sayi,int *);
int main()
{
	long sayi;
	int i,x,dizi[7]; //Long degiskeni en fazla 7 basamaklı deger aldıgı icin dizi[7] diyerek belittik.
	
	printf("Sayiyi giriniz: ");
	scanf("%ld",&sayi);
	x=Basamakla(sayi,dizi);
	printf("Basamak sayisi= %d \n",x);
	for(i=0;i<x+1;i++)
	{
		printf("%d ",dizi[i]);
	}
}
int Basamakla(long sayi,int *dizi)
{
	int i,a,sayac=0;
	
	for(i=1;sayi!=0;i++)
	{
		a=sayi%10;
		dizi[i]=a;
		if(sayi%10==sayi)
		{
			dizi[0]=-1;
		}
		sayac++;
		sayi/=10;
	}
	return sayac;
}
