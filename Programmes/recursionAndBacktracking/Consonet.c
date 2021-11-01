#include <stdio.h>

int lengthofStr(char string[]) {
	int len=0;
	while(string[len]!='\0')
		len++;
	return len;
}

void nonRec(char string[]) {
	int count=0;
	for (int i = 0; i < lengthofStr(string); ++i)
	{
		if (string[i]!='a' && string[i]!='e' && string[i]!='i' && string[i]!='o' && string[i]!='u')
		{
			count++;
		}
	}
	printf("Total Consonents:-> %d\n", count);
}

	int count;
int rec(char string[], int pos, int len) {
	if (pos==len)
	{
		return count;
	}
	if (pos<len)
	{
		if (string[pos]!='a' && string[pos]!='e' && string[pos]!='i' && string[pos]!='o' && string[pos]!='u')
		{
			count++;
		}
		rec(string, pos+1, len);
	}
}


int main(int argc, char const *argv[])
{
	char string[100]="hanuman";
	//nonRec(string);
	int xx=rec(string, 0, 7);
	printf("count:-> %d\n", xx);
	return 0;
}