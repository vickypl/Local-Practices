#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int arr1[1000];
	int arr2[1000];
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d", &arr1[i],&arr2[i]);
	}

	int arr3[100],x=0;
	for (int i = 0; i < n; ++i)
	{
		if (arr1[i]>arr2[i])
		{
			arr3[x]=arr1[i]-arr2[i];
			x++;
		} else {
			arr3[x]=arr2[i]-arr1[i];
			x++;
		}
	}

	int smallest=arr3[0];
	int largest=arr3[0];
	for (int i = 0; i < x; ++i)
	{
		if (arr3[i]>largest)
		{
			largest=arr3[i];
		}
		if (arr3[i]<smallest)
		{
			smallest=arr3[i];
		}
	}

	printf("%d %d\n", largest, smallest);

	return 0;
}