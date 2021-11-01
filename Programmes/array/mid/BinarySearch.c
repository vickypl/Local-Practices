#include <stdio.h>
#include <stdbool.h>

void binarySearch(int arr[], int n, int item) {
	int start=0;
	int end=n-1;
	int mid;
	bool mila=false;

	while(start<end) {		
		mid=(start+end)/2;
		if (item==arr[mid])
		{
			mila=true;
			break;
		} else if (item<arr[mid])
		{
			end=mid-1;
		} else {
			start=mid+1;
		}
	}
	if (mila)
	{
		printf("Data found at pos %d\n", mid);
	} else {
		printf("Data not found..\n");
	}
}


int main(int argc, char const *argv[])
{
	int arr[]={11, 13, 15, 18, 23, 41, 51, 53, 61, 64};
	int n=sizeof(arr)/sizeof(arr[0]);
	//int xx=binarySearch(arr, n, 53);
	//printf("%d\n", arr[xx]);
	
	binarySearch(arr, n, 15);

	return 0;
}