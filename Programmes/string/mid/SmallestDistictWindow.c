#include <stdio.h>


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


int main(int argc, char const *argv[])
{
	char string[100]="dbeyhkbsombltouujdrbwcrrcgbflqpottpegrwvgajcrgwdlpgitydvhezdtusippyvxsuvbvfenodqasajoy";
	char temp[100],t=0;

	for (int i = 0; i < lengthofStr(string); ++i)
	{
		printf("%c", string[i]);
	}
	printf("\n");

	for (int i = 0; i < lengthofStr(string); ++i)
	{
		if (string[i]!=-1)
		{
			for (int j = i+1; j< lengthofStr(string); ++j)
			{
				if (string[i]==string[j])
				{
					string[j]=-1;
				} else {
					if (temp[t-1]!=string[i])
					{
						temp[t]=string[i];
						t++;
					}
				}
			}
		}
	}
	printf("%d \n", t);
	for (int i = 0; i < t; ++i)
	{
		printf("%c", temp[i]);
	}
	printf("\n");
	return 0;
}