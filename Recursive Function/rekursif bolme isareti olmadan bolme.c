#include <stdio.h>
#include <stdlib.h>

int Bolum(int bolunen, int bolen)
{
	if(bolen == 0)	return 0;
	else if(bolunen == bolen)	return 1;
	else if(bolunen < bolen)	return 0;
	else	return (1 + Bolum(bolunen-bolen,bolen));
}

int main()
{
	int a,b;
	printf("Bolmek istediginiz sayiyi giriniz: ");
	scanf("%d",&a);		printf("\n");
	printf("Kaca bolmek istediginizi girin: ");
	scanf("%d",&b);
	
	printf("BOLUM: %d\n",Bolum(a,b));
	printf("KALAN: %d",a-(Bolum(a,b)*b));
	
	return 0;
}
