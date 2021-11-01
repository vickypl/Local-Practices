#include<stdio.h>

int missin(int arr[], int n) {
	int total=n*(n+1)/2;
	int sum=0;
	for (int i = 0; i < n-1; ++i)
	{
		sum=sum+arr[i];
	}
	total=total-sum;
	return total;
}


int main(int argc, char const *argv[])
{
	int arr[10000],n,t;//={1,3,2,5};
	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &n);
		for (int j = 0; j < n-1; ++j)
		{
			scanf("%d",&arr[j]);
		}
		int miss=missin(arr, n);
		printf("%d\n", miss);
	}

	return 0;
}