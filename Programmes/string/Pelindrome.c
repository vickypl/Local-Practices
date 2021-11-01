#include <stdio.h>
#include <stdbool.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

int main(int argc, char const *argv[])
{
	char string[100]="laaavaaal";
	int start=0,end=lengthofStr(string)-1;
	bool sta=true;
	for (int i = 0; i < (lengthofStr(string)/2); ++i)
	{
		if (string[start]!=string[end])
		{
			sta=false;
		}
		start++,end--;
//		printf("start %c end %c\n", string[start],string[end]);
	}
	if (sta)
	{
		printf("Yes it is pelindrome..\n");
	} else {
		printf("No it is not a pelindrome\n");
	}

	return 0;
}