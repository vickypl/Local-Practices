#include <stdio.h>


int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

void isitInt(char string1[], char string2[], char string3[]) {
	int count=0;

	for (int i = 0; i <4; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (string3[i]==string1[j])
			{
				count++;
				break;
			}
		}
		for (int k = 0; k < 2; ++k)
		{
			if (string3[i]==string2[k])
			{
				count++;
				break;
			}
		}
	}
	//printf("%d\n", count);
	if (count==lengthofStr(string3))
	{
		printf("Yes this in Interleving\n");
	} else {
		printf("No this is not Interleving\n");
	}
}

int main(int argc, char const *argv[])
{
	char string1[1000]="AB";
	char string2[1000]="CD";
	char string3[1000]="ABCD";
		char string4[1000]="ACBD";
			char string5[1000]="ACDB";
				char string6[1000]="CABD";
					char string7[1000]="CDFB";


	isitInt(string1, string2, string3);
	isitInt(string1, string2, string4);
	isitInt(string1, string2, string5);
	isitInt(string1, string2, string6);
	isitInt(string1, string2, string7);

	return 0;
}