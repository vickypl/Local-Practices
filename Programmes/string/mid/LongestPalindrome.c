#include <stdio.h>
#include<stdbool.h>

int isPalindrome(char string[], int start, int end) {
	int length=end-start;
	int mid=(start+end)/2;
	//printf("mid %d\n", mid);
	bool istrue=true;
	for (int i = start; i <=mid; ++i)
	{
		if (string[i]!=string[end])
		{
			istrue=false;
			break;
		}
		end--;
	}
	if (istrue)
	{
		//printf("Palindrome..\n");
		return length;
	} else {
		//printf("Non Palindrome..\n");
	}
}


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


int main(int argc, char const *argv[])
{
	char string[1000]="abbbaabbccabbb"; //bbaabb
//	char string[100]="aabbbaba";

//	int x=isPalindrome(string, 0, 6);
//	printf("Length %d\n", x);

	int bign=0,endg=(lengthofStr(string)-1);
	printf("End %d\n", endg);
	int max=0;
	for (int i = bign; i < lengthofStr(string)/2; ++i)
	{
		int xx=isPalindrome(string, i, endg);
		if (xx>max)
		{
			max=xx;
			printf("maxxxx %d\n", max);
		}
		endg--;
	}
	printf("Max Length %d\n", max);

//	isPalindrome(string, 0, 6);


	return 0;
}