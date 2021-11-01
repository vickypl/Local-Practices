#include <stdio.h>

void print(int arr[], int n) {
	for (int ii = 0; ii < n; ++ii)
	{
		printf(" %d", arr[ii]);
	}
	printf("\n");
}


void rotate(int arr[], int n) {
	int temp=arr[n-1];
	for (int i = n-1; i > 0; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
}


int main(int argc, char const *argv[])
{
	int arr[1000],t,n;//={1,2,3,4,5};
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{	scanf("%d", &n);
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&arr[j]);
		}
		rotate(arr, n);		/* code */
	}
	print(arr, n);
	return 0;
}