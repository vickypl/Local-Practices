#include <stdio.h>	

int main(int argc, char const *argv[])
{
	int arr[10]={5,4,6,-3,4,5,-4,4,-3,9};
	int temp[10],mul,x=0;

	for (int i = 0; i < 10; ++i)
	{
		if (i==0)
		{
			temp[x]=arr[i];
			mul=arr[i];
			x++;
		} else {
			mul=mul*arr[i];
			temp[x]=mul;
			x++;
		}
	}
	int dd=temp[0];
	for (int k = 0; k < x; ++k)
	{
		if (dd<temp[k] && temp[k]>0)
		{
			dd=temp[k];
		}
	}
	printf("Largest till now baby: %d\n", dd);

	for (int i = 0; i < 10; ++i)
	{
		printf("%d \n", temp[i]);
	}

	return 0;
}