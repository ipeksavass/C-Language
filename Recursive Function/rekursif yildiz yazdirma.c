#include <stdio.h>
#include <stdlib.h>

void yildiz(int say)
{
	int i;
	
	if(say==0)	return 0;
	
	else
	{
		for(i=0;i<say;i++)
		{
			printf("*");
		}
		printf("\n");
		yildiz(say-1);
	}
}

int main()
{
	int num;
	printf("Lutfen maks yildiz sayisini giriniz: ");
	scanf("%d",&num);
	yildiz(num);
	return 0;
}
