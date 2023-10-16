#include <stdio.h>
#include <stdlib.h>

int asalSayi(int sayim,int yarisi)
{
	if(yarisi==1)
		return 1;
	else if(sayim % yarisi == 0)
		return 0;
	else
		return asalSayi(sayim,yarisi-1);
}


int main()
{
	int N,i,kontrol;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&N);
	
	for(i=2;i<=N;i++)
	{
		kontrol = asalSayi(i,i/2);
		
		if(kontrol==1) 
			printf("%d\n",i);
	}
		
}

