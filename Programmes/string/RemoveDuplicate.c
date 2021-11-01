#include <stdio.h>


void sort(char string[]) {
	for (int i = 0; string[i]!='\0'; ++i)
	{
		for (int j = i+1; string[j]!='\0'; ++j)
		{
			if (string[i]>string[j])
			{
				char temp=string[i];
				string[i]=string[j];
				string[j]=temp;
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	char string[1000]="this is the tross";
	printf("%s\n", string);
	//sort(string);
	//printf("%s\n", string);
	int k;
	for (int i = 0; i<17; ++i)
	{
		for (int j = 0; j<17; ++j)
		{
			if (string[i]==string[j])
			{
				if (i!=j)
				{
					k=j;
					//printf("%d\n", k);
					while(string[k]!='\0') {
						string[k]=string[k+1];
						k++;
					}
				}
			}
		}
	}
	printf("%s\n", string);

	return 0;
}