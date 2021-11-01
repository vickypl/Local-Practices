#include <stdio.h>
#include <string.h>
int main() {
	char string[100];
	int index[100];
	int length,n,in=0;
	    scanf("%[^\n]s", string);
		length = strlen(string);
		while(length)
		{
			char temp=string[length-1];
			if ((temp==' ') || (temp=='.'))
			{
				//int k=i+1;
				index[in]=length;
				in++;
			}
			length--;
		}

		printf("%d\n", length);
		printf("%s\n", string);
		for (int j = 0; j <in; ++j)
		{
			printf("%d", index[j]);
		}

	return 0;
}