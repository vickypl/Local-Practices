#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100]="     this is in the       ocean of love";
  	int i, j, len, startIndex, endIndex;

  	len = strlen(str);
  	endIndex = len - 1;
  
  	printf("%s\n", str);

  	for(i=len-1; i>=0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= endIndex; j++)
			{
				printf("%c", str[j]);
			}
			endIndex = i - 1;
			printf(" ");		
		} 
	}
	printf("\n");
	
  	return 0;
}