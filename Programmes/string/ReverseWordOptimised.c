#include <stdio.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

int main(int argc, char const *argv[])
{
	char string[1000]="This is the game of love";
	char supp[1000];

	printf("%s\n", string);
	int s=0;
	for (int i =23; i >=0 ; --i)
	{
		supp[s]=string[i];
		s++;
	}
	supp[s]='\0';

	for (int i = 0; supp[i]!='\0'; ++i)
	{
		if (supp[i+1]==' ' || supp[i+1]=='\0')
		{
			for (int k = i; k>=0 && supp[k]!=' '; --k)
			{
				printf("%c", supp[k]);
			}
			printf(" ");
		}
	}
printf("\n");






/*	for (int i = lengthofStr(string)-1; i >= 0; --i)
		{
			supp[s]=string[i];
			s++;
		}*/
	//printf("%s\n", supp);




	return 0;
}