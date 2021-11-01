#include <stdio.h>
#include <stdbool.h>
int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


int main(int argc, char const *argv[])
{
	char string[100]="this is done";
	char x='a';
	bool exist;
	char new[26],n=0;

	while(x!='{') {	
		exist=false;
		for (int i = 0; i < lengthofStr(string); ++i)
		{
			if (x==string[i])
			{
				exist=true;
				//break;
			}
		}

		if (exist)
		{
			new[n]=x;
			n++;
		}
		x++;
	}
	printf("\n");
	printf("%d\n", n);
	for (int i = 0; i < n; ++i)
	{
		printf("%c", new[i]);
	}
	printf("\n");

	return 0;
}