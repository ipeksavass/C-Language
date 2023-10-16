#include <stdio.h>
#include <stdlib.h>

int tekSayilar(int basD,int sonD)
{
	if(basD <= sonD)
	{
		printf("%d\n",basD);
		tekSayilar(basD+2,sonD);
		
	}
}


int main(){
	int N,bitis;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&N);
	
	if(N%2==0)
		bitis=N-1;
	else	
		bitis=N;
		
	tekSayilar(1,bitis);
}
