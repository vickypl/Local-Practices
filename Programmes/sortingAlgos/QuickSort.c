#include <stdio.h>
#include <string.h>
#include <stdio.h>
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

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
	int arr[]={87, 34, 46, 78, 43, 56, 67};
	int size=sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	quicksort(arr, 0, size);

	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");


	return 0;
}