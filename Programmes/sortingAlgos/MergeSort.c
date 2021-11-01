#include <stdio.h>

void swap(int *a, int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}

void merge(int a[], int low, int mid, int high) {
   int b[100];
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void mergeSort(int arr[], int start, int end) {
	if (start<end)
	{
		int mid=(start+end)/2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);
		merge(arr, start, mid, end);
	}
}


int main(int argc, char const *argv[])
{
	int arr[]={45, 43, 34, 63, 55, 46, 54, 76, 89 ,87, 79};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Length of Array: %d\n", size);

	printf("Unsorted: ");

	for (int k = 0; k < size; ++k)
	{
		printf("%d ", arr[k]);
	}
	printf("\n");

	mergeSort(arr, 0, 10);

	printf("Sorted: ");

	for (int k = 0; k < size; ++k)
	{
		printf("%d ", b[k]);
	}
	printf("\n");

	return 0;
}