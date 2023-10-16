#include <stdio.h>
#include <stdlib.h>
faktoriyel(N)
{
	if(N==0 || N==1)
		return 1;
	else
		return N * faktoriyel(N-1);
}

int main(){
	int sayi;
	printf("Lutfen faktoriyelinin alinmasini istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("faktoriyel: %d",faktoriyel(sayi));
	
}
