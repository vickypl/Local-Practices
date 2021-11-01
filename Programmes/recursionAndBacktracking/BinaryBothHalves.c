#include <stdio.h>
#include <stdbool.h>
char result[100];

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


bool isPalindrome(char string[]) {

	int length=lengthofStr(string)-1;
	int start=0;
	bool result=true;
	while(start<length) {
		if (string[start]!=string[length])
		{
			result=false;
		}
		start++;
		length--;
	}
	return result;
}


void binary(int n, int k) {
		if (k>n)
		{
			return;
		}
		if (k==0 || result[k]!='1')
		{
			result[k]='1';
			binary(n, k+1);
		}
		if (k==n)
		{
			result[k]='\0';
			if (isPalindrome(result))
			{
				printf("%s\n", result);
			}
			return;
		}
		result[k]='0';
		binary(n, k+1);
}

int main(int argc, char const *argv[])
{

	binary(3, 0);
	return 0;
}