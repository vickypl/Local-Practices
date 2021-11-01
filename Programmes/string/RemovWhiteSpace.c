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
	char string[1000]="Dreams come true";

	printf("%s\n", string);

	for (int i = 0; i < lengthofStr(string); ++i)
	{
		if (string[i]==' ')
		{
			int j=i;
			while(j<lengthofStr(string)) {
			//printf("==\n");
				string[j]=string[j+1];
				j++;
			}
		}
	}
	printf("%s\n", string);
	return 0;
}