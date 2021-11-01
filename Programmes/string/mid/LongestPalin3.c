#include <stdio.h>
#include <stdbool.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


void printSubStr(char string[], int low, int high) 
{ 
    for (int i = low; i <= high; ++i) 
        printf("%c", string[i]);
    printf("\n");
} 


int main(int argc, char const *argv[])
{
	char string[1000]="abbbaabbccabbb"; 
	int max=1, start=0;

	for (int i = 0; i < lengthofStr(string); ++i)
	{
		for (int j = i; j < lengthofStr(string); ++j)
		{
			bool flag=true;

//			printf("i=%d /// j-i+1=%d\n", i,j-i+1);
			for (int k = 0; k < (j-i+1)/2; ++k)
			{
				if (string[i+k]!=string[j-k])
				{
					flag=false;
				}
			}
			if (flag && (j-i+1)> max)
			{
				start=i;
				max=j-i+1;
			}
		}
	}
	printSubStr(string, start, start+max-1);
	printf("Max length of the string %d\n", max);


	return 0;
}