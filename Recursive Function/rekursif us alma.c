#include <stdio.h>
#include <stdlib.h>

int sonuc(int taban,int us);

int main(){
	int A,b;
	printf("Lutfen ussunun alinmasini istediginiz sayiyi giriniz: ");
	scanf("%d",&A);
	printf("\n");
	printf("Kac ussu alinsin: ");
	scanf("%d",&b);
	printf("%d uzeri %d= %d",A,b,sonuc(A,b));
}

int sonuc(int taban,int us)
{
	int deger;
	
	if(taban!=0){
		if(us == 0)
		{
			deger=1;
			
		}
	
		else	deger = taban * sonuc(taban,us-1);
		return deger;
	}
	else	return 0;
}
