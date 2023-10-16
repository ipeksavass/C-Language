#include <stdio.h>
#include <stdlib.h>

int fibonacci(int k)
{
	if(k==0)	return 0;
	else if(k==1)	return 1;
	else	return (fibonacci(k-2) + fibonacci(k-1));
}

int main()
{
	int sayi,i;
	printf("Kac elemanlik bir dizi olusturmak istiyorsunuz: ");
	scanf("%d",&sayi);
	printf("\n");
	for(i=0;i<sayi;){
		printf("%d ",fibonacci(i));	
		i++;
	}
}
