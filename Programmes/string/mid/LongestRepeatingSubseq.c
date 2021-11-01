#include <stdio.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}



int main(int argc, char const *argv[])
{
	char string[1000]="abcbjdhwiuhfbbbbbkjdsib";
	int count, max=0;

	for (int i = 0; i < lengthofStr(string); ++i)
	{
		count=0;
		for (int j = i+1; j < lengthofStr(string); ++j)
		{
			if (string[i]==string[j])
			{
				count++;
			} else {
				break;
			}
		}
		if (count>max)
		{
			max=count;
		}
	}
	printf("Longest sequence: %d\n", max);

	return 0;
}