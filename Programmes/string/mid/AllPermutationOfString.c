#include <stdio.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

int main(int argc, char const *argv[])
{
	char string[1000]="abc";
	return 0;
}