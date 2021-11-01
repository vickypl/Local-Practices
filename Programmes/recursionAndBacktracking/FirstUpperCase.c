#include <stdio.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

void upper(char string[]) {
	for (int i = 0; i < lengthofStr(string); ++i)
	{
		int c=string[i];
		if (c<97 && c>=65)
		{
			printf("char: %c, value %d\n", string[i],c);
		}
	}
}


void upperRec(char string[], int start, int length) {
	if (start==length)
		return;
	if (start<length && (string[start]<97 && string[start]>65))
	{
		printf("%c\n", string[start]);
	}
	upperRec(string, start+1, length);
}


int main(int argc, char const *argv[])
{
	char string[100]="abcdefghijklMnopqrstuvwxyz";
//	char string[100]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	upper(string);
	upperRec(string, 0, 26);
	return 0;
}