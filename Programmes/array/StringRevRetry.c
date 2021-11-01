#include <stdio.h>


void rev(int arr[], int start, int end) {
	
	if (start==end)
		return;
	int temp=arr[end];
		arr[end]=arr[start];
		arr[start]=temp;
		rev(arr, start+1, end-1);
}


int main(int argc, char const *argv[])
{
	int arr[]={1, 2, 3, 4, 5};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Size of an array: %d\n", size);
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	rev(arr, 0, 4);
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}