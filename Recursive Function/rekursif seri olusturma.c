#include <stdio.h>
#include <stdlib.h>

void seri(int B,int S,int f)
{
	if(B <= S){
		printf("%d\n",B);
		seri(B+f,S,f);
	}
}

int main(){
	int bas,son,artis;
	printf("Lutfen baslangic degerini giriniz: ");
	scanf("%d",&bas);	printf("\n");
	printf("Lutfen bitis degerini giriniz: ");
	scanf("%d",&son);	printf("\n");
	printf("Lutfen artis degerini giriniz: ");
	scanf("%d",&artis);	printf("\n");
	
	seri(bas,son,artis);
}

