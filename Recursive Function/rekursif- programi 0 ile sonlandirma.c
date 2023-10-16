#include <stdio.h>
#include <stdlib.h>

void func()
{
	int sayi;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi!=0){
		func();
	}
	else
		exit(0);
		
}

int main(){
	func();
	return 0;
}
