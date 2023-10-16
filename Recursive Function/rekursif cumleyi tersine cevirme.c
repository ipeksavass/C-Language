#include <stdio.h>
#include <stdlib.h>

void terscumle(char *metin,int boy)						//*metin stringin pointerla gosterimi
{
	if(boy>=0)
	{
		printf("%c",metin[boy]);
		terscumle(metin,boy-1);
	}
}

int main()
{
	char cumle[100];
	printf("tersini yazdirmak istediginiz metni giriniz:      ");
	gets(cumle);										//gets kullanma amacimiz bosluklardan sonrasýný da ekrandan alabiliyor olmasi
	printf("\n");
	strlen(cumle);	
	printf("girdiginiz metnin tersi:     ");				//strlen stringin uzunlugunu hesapliyor bosluklari da hesaplýyor
	terscumle(cumle,strlen(cumle)-1);					//strlen(cumle)-1 yazma nedenimiz dizinin 0 ile boy-1 arasinda dizilmesi
	return 0;
	
}
