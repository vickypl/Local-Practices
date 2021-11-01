#include <stdio.h>
#include <string.h>


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}



int main(int argc, char const *argv[])
{
	char string[100]="abcdefgd";

	for (int i = 0; i < lengthofStr(string); ++i)
	{	
		for (int j = i+1; j < lengthofStr(string); ++j)
		{
			if (string[i]==string[j])
			{
				printf("%c ", string[i]);
				string[j]==-1;
			}
		}
	}

	return 0;
}