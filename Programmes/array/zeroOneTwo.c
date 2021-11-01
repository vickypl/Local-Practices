#include <stdio.h>

int main() {
	int arr[19]={2, 0, 2, 2, 1, 1, 0, 0, 1, 0, 2, 1, 2, 2, 0, 0, 0, 2, 1};
	int n=19;
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
printf("\n");
	int index[3],count0=0,count1=0,count2=0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]==0)
		{
			count0++;
		}
		if (arr[i]==1)
		{
			count1++;
		}
		if (arr[i]==2)
		{
			count2++;
		}
	}
	index[0]=count0;
	index[1]=count1;
	index[2]=count2;
	int k,x=0,t=0;
	for (int j = 0; j < 3; ++j)
	{
		int intial=0;
		int final=index[j];
		for (k = intial; k < final; ++k)
		{
			arr[x]=t;
			x++;

		}
		t++;
		intial=final;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
}