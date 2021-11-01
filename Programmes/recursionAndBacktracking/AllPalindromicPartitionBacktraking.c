#include <stdio.h>
#include<string.h>
#include <stdbool.h>


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

void SubPalindrome(char string[]) {
	int length=lengthofStr(string);
	char temp[100];
	for (int i = 0; i < length; ++i)
	{
		for (int j = 1; j <=length-i ; ++j)
		{
			int k=0;
			while(k<j) {
				temp[k]=string[k+i];
				k++;
			}
			temp[k]='\0';
			if(isPalindrome(temp))
            {
              printf("%s ", temp);  
            }
		}
	}

}



int main(int argc, char const *argv[])
{
	char string[100]="hello";
	SubPalindrome(string);
	return 0;
}