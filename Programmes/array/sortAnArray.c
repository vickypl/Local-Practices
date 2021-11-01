#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10]={28, 76, -54, 32, 56, 23, 87, 36, -85, 96};
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", arr[i]);
	}

	int index;
	for (int i = 0; i < 9; ++i)
	{
		int smallest=arr[i];
		for (int j = i+1; j < 10; ++j)
		{
			if (smallest>arr[j])
			{
				smallest=arr[j];
				index=j;
			}
		}
		int temp=arr[i];
		arr[i]=smallest;
		arr[index]=temp;
	}

	printf("\n");

	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", arr[i]);
	}


}