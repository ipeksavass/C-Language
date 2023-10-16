#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,x;
	printf("Ikinin kaca kadar olan uslerini almak istediginizi giriniz: ");
	scanf("%d",&x);
	us(x);
	
}

int us(int F){
	int deger;
	if(F==0)	deger= 1;
	else	deger= 2*us(F-1); 
	printf("%d\n",deger);
	return deger;


}
