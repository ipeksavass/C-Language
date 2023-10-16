#include <stdio.h>
#include <stdlib.h>
int karakter(char *i);

int main()
{
	char metin[100];
	printf("Lutfen karakter dizisini giriniz: ");
	gets(metin);		printf("\n\n\n");
	
	printf("Stringin boyu: %d",karakter(metin));
	return 0;
}

int karakter(char *i)
{
	if(*i == '\0')	return 0;
	else
	{
		return (1+ karakter(i + 1));
	}
}
