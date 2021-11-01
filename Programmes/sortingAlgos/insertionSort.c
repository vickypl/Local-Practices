#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[]={48, 23, 103, 54, 64, 56, 57, 65, 76, 87, 99, 85};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", size);
	
	for (int i = 1; i < size; ++i)
	{
		int key=arr[i];
		int k=i-1;
		while (k>=0 && arr[k]>key)
		{
			arr[k+1]=arr[k];	
			k--;
		}
		arr[k+1]=key;
	}

	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}