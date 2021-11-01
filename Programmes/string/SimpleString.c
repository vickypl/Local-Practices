#include <stdio.h>
#include <string.h>


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}



void charCount(char string[]) {
	int counter;
	for (int i = 0; i < lengthofStr(string); ++i)
	{
		counter=1;
		for (int j = i+1; j < lengthofStr(string); ++j)
		{
			if (string[i]==string[j])
			{
				counter++;
				string[j]=-1;
			}
		}
		if (string[i]!=-1)
		{
			printf("Char %c, times %d\n", string[i],counter);
		}
	}
}


int main(int argc, char const *argv[])
{
	char string[100000]="This is vicky";
//	scanf("%[^\n]s", string);

	printf("%s\n", string);

	charCount(string);
	return 0;
}