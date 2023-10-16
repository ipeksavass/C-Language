#include <stdio.h>
#include <stdlib.h>

void sirala(int A[],int boy){
	int gecici,i;
	if(boy>0)
	{
		for(i=0;i<boy;i++)
		{
			if(A[i]>A[i+1])
			{
				gecici = A[i+1];
				A[i+1]=A[i];
				A[i]=gecici;
			}
		}
		sirala(A,boy-1);
	}
}


int main()
{
	int N,i;
	printf("Lutfen kac elemanlik bir dizi olusturmak istediginizi yazin: ");
	scanf("%d",&N);	printf("\n");
	
	int dizi[N];
	srand (time(0));
	
	for(i=0;i<N;i++)
	{
		dizi[i]=rand()%100; 			//100 sýnýr sayiyi gösteriyo 		rand()%x  scanf gibi deger alýyo 
		printf("%d\n",dizi[i]);
	}
	
	sirala(dizi,N-1);
	printf("\n\n\n");
	
	for(i=0;i<N;i++)
	{
		printf("%5d",dizi[i]);
	}
	return 0;
}
