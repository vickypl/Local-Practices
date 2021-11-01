#include <stdio.h>
#include <stdlib.h>


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

void swap(char *a, char *b) {
	char temp=*a;
	*a=*b;
	*b=temp;
}

int main(int argc, char const *argv[])
{
	char string[1000]="this is vicky";
	int start=0,end=(lengthofStr(string)-1);
	for (int i = 0; i <= end/2; ++i)
	{
		swap(&string[start], &string[end]);
		start++,end--;
	}

	printf("%s\n", string);

	return 0;
}