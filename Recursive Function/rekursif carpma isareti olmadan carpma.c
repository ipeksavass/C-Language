#include <stdio.h>
#include <stdlib.h>

int carpim(int A,int B){
	if(B == 1)
		return A;
	else
		return A + carpim(A,B-1);
	
}

int main()
{
	int x,y;
	printf("Lutfen bir x ve y sayisi giriniz:\n");
	scanf("%d %d",&x,&y);
	printf("islemin sonucu: %d",carpim(x,y));
	
	
}

