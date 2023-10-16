#include <stdio.h>
#include <stdlib.h>

int main(){            //N'den 0'a kadar olan sayilarin listesi.
	int N;
	printf("Lutfen N icin bir deger giriniz: ");
	scanf("%d",&N);
	listele(N);
}

void listele(int sayi){
	if(sayi == 0)
		printf("%d",sayi);
		
	else{
		printf("%d\n",sayi);
		listele(sayi - 1);
	}
}

