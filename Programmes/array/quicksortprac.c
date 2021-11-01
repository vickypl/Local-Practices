#include <stdio.h>

void quicksort(int arr1[], int low, int high) {

	int pivot, start, end, temp;

	if (low<high)
	{
		pivot=low;
		start=low;
		end=high;
//		printf("pivot is %d\n", pivot);
		while(start<end) {
			while(arr1[pivot]<=arr1[start] && start<high)
				start++;
			while(arr1[pivot]>arr1[end])
				end--;
			if (start<end)
			{
				temp=arr1[start];
				arr1[start]=arr1[end];
				arr1[end]=temp;
			}
		}
		temp=arr1[pivot];
		arr1[pivot]=arr1[end];
		arr1[end]=temp;
		quicksort(arr1, low, end-1);
		quicksort(arr1, end+1, high);
	}
}


int main(int argc, char const *argv[])
{
	int arr1[]={43, 98, 23, 24, 47, 67, 68, 86, 96, 45, 34, 25, 46, 87, 54};
	int length=sizeof(arr1)/sizeof(arr1[0]);
	//printf("Size: %d\n", length);
	quicksort(arr1, 0, 14);
	for (int i = 0; i < length; ++i)
		{
			printf("%d ", arr1[i]);
		}
		printf("\n");	


	return 0;
}



