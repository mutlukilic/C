#include<stdio.h>

int torpilYap(int *,int,int,int);

int main(){
	int dizi[9]={1,3,4,6,12,25,56,110,120};
	
	torpilYap(dizi,9,8,2);
	for(int i=0;i<9;i++){
		printf("%d,",dizi[i]);
	}
	return 0;
}

int torpilYap(int *dizi,int eleman,int eski,int yeni){
	int i,yedek;
	for(i=yeni;i<eski;i++){
		yedek=*(dizi+(eleman-i));
		*(dizi+(eleman-i))=*(dizi+(eleman-i-1));
		*(dizi+(eleman-i-1))=yedek;
	}
}
