#include <stdio.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}


int main(int argc, char const *argv[])
{
	char string[100]="bbbbbba";
	//char string[100]="abbbaabbccabbb";
	int length=lengthofStr(string);
//	printf("%d\n", length);
	for (int i = 0; i < length; ++i)
	{
		printf("%c ", string[i]);
	}
	printf("\n");
	int len[1000],l=0;
	for (int i=1; i<=length-2; ++i)
	{
		int lefter=i-1;
		int righter=i+1;
		int lengofp=1;
		printf("left %d //  center %d // right %d\n", lefter,i,righter);
		while(lefter>=0 && righter<=length && string[lefter]==string[righter]) {
			
			if (righter-lefter+1>lengofp)
			{
				lengofp=righter-lefter+1;
			}

			--lefter;
			++righter;
		}
		len[l]=lengofp;
		l++;
	}

	for (int i = 0; i < l; ++i)
	{
		if (i==0)
			printf("   %d", len[i]);
		else
			printf(" %d", len[i]);
	}
printf("\n");
	return 0;
}