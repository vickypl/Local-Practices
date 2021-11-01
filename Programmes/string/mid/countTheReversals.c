#include <stdio.h>

int main(int argc, char const *argv[])
{
	//int arr[]={'}','{', '{','}','}','{','{','{'};
	//int length=sizeof(arr)/sizeof(arr[0]);
	char string[]="}{{}}{{{";
	int length=0;
	while(string[length]!='\0')
		length++;
	
	//printf("%d\n", length);
	int l,m,k;
	if ((length%2)==0)
	{
		l=0,m=0,k=0;

		for (int i = 0; i < length; ++i)
		{
			if (string[i]='{')
				l++;
			if (string[i]='}')
				m++;
		}

	}

	printf("l, m  %d %d\n", l, m);
	return 0;
}