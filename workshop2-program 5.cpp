// workshop2-program 5
#include<stdio.h>
#include<ctype.h>

int main ()
{
	int nVowels = 0, nConsonants=0, nOthers = 0;
	char ch;
	printf("Entered text: ");
	do 
	{
		ch = getchar();
		ch = toupper(ch);
		if (ch>='A'&&ch<='Z')
		{
			switch (ch)
			{
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					nVowels++;
					break;
				default:
					nConsonants++;
			}
		}
		else 
		{
			nOthers++;
		}
	}
	while (ch!='\n');
	printf("%d\n",nVowels);
	printf("%d\n",nConsonants);
	printf("%d\n",nOthers);
	
	
	return 0;
}
