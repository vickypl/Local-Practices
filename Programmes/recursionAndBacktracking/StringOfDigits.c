#include <stdio.h>



int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


void allCombo(char digit[]) {
	int length=lengthofStr(digit);
	char temp[100];
	for (int i = 0; i < length; ++i)
	{
		for (int j = 1; j <=length-i; ++j)
		{
			int k=0;
			while(k<j) {
				temp[k]=digit[k+i];
				k++;
			}
			temp[k]='\0';
			printf("%s ", temp);
		}
	}
}


int main(int argc, char const *argv[])
{
	char digit[100]="123";
	allCombo(digit);
	return 0;
}