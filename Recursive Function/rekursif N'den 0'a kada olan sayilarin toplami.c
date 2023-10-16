#include <stdio.h>
#include <stdlib.h>

int topla( int sayi){
	if(sayi == 0)
		return sayi + 0;
	else
		return sayi + topla(sayi - 1);
}

int main(){
	int N;
	printf("Lutfen bir N sayisi giriniz: ");
	scanf("%d",&N);
	topla(N);
	printf("toplma:%d",topla(N));
}

