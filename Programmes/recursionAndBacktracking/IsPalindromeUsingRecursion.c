#include <stdio.h>
#include <string.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


void rev(char string[], int start, int end) {
	char ch;
	if (start<end)
	{
		return;
	} else {
		ch=string[start];
		string[start]=string[end];
		string[end]=start;
		rev(string, start+1, end-1);
	}
}


int main(int argc, char const *argv[])
{
	char string[100]="aadbdaa";
	char string2[100];
	strcpy(string2, string);
	int len=lengthofStr(string)-1;
	rev(string, 0, len);

	printf("%s\n", string);
	printf("%s\n", string2);

	if (strcmp(string, string2)==0)
	{
		printf("Yes it is palindrome..\n");
	} else {
		printf("No it is not a palindrome..\n");
	}
	return 0;
}