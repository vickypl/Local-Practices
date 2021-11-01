#include<stdio.h>
#include<string.h>

int main() {
    char string[1000];
    int ans=0,n;
    scanf("%s", string);
  	n = strlen(string);
    if (n%2!=0)
   	{
   		printf("false\n");
   	} else {
   		int x=n/2;
   		int k=x;
   		for (int j = 0; j < x; ++j)
   		{
	   		if (string[j]==string[k])
	   		{
	   			ans++;
	   		}
	   		k=k+1;
   		}
   		if (ans==x)
   		{
   			printf("true\n");
   		} else {
   			printf("false\n");
   		}
   	}
}