#include <stdio.h>

void quicksort(int arr[], int low, int high) {
	int start, end, temp, pevil;
	if (low<high)
	{
		pevil=low;
		start=low;
		end=high;
		while(start<end) {
			while(arr[pevil]>=arr[start] && start<high) {
				start++;
			}
			while(arr[pevil]<arr[end]) {
				end--;
			}
			if (start<end)
			{
				temp=arr[start];
				arr[start]=arr[end];
				arr[end]=temp;
			}
		}
		temp=arr[pevil];
		arr[pevil]=arr[end];
		arr[end]=temp;
		quicksort(arr, low, pevil-1);
		quicksort(arr, pevil+1, high);
	}
}


int main(int argc, char const *argv[])
{
	int arr[]={12, 28, 24, 23, 43, 49, 46, 59, 76, 73, 78, 37, 79, 89, 80, 98, 96, 10, 89};
	for (int i = 0; i < 19; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	quicksort(arr, 0, 19);
	for (int i = 0; i < 19; ++i)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}