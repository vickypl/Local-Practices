#include <stdio.h>

void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int max(int arr[], int n) {
	int max=arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (max<arr[i])
		{
			max=arr[i];
		}
	}
	return max;
}


int min(int arr[], int n) {
	int min=arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (min>arr[i])
		{
			min=arr[i];
		}
	}
	return min;
}
int main(int argc, char const *argv[])
{
	int arr[]={1, 5, 8, 10};
	int n=sizeof(arr)/sizeof(arr[0]);
	//printf("%d\n", n);
	int k=2;

	int t1;
	if (((min(arr, n))-k) > 0)
	{
		t1=((min(arr, n))-k);
	} else {
		t1=min(arr, n);
	}
	int t2=(max(arr, n)+k);
	int height=(t2-t1);
	printf("Height maximum %d\n", height);




	/*
	print(arr, n);
	for (int i = 0; i < n; ++i)
	{
		arr[i]=arr[i]+k;
	}
	print(arr, n);
*/

	return 0;
}