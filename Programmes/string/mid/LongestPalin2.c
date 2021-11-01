#include <stdio.h>

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
	int beg=0,start, end;
	int length=lengthofStr(string);
	int max=1;
	for (int i = 1; i < lengthofStr(string); ++i)
	{
		start=i-1;
		end=i;

		while(start>=0 && end<length && string[start]==string[end]) {
			if (end-start+1>max)
			{
				beg=end-start;
				max==end-start+1;
			}
			--start;
			++end;
		}

		start=i-1;
		end=i+1;

		while(start>=0 && end<length && string[start]==string[end]) {
			if (end-start+1>max)
			{
				beg=start;
				max==end-start+1;
			}
			--start;
			++end;
		}		
	}

	printSubStr(string, start, start+end-1);
	return 0;
}