#include <stdio.h>
#include <stdbool.h>
int m;
void printMatrix(int arr[][m], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("[%d] ", arr[i][j]);
			if (j==n-1)
			{
				printf("\n");
			}
		}
	}
}

void swap(int *a, int *b) {
		int temp=*a;
		*a=*b;
		*b=temp;
}


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
		printf("Data found at pos %d ans data is: %d\n", mid, arr[mid]);
	} else {
		printf("Data not found..\n");
	}
}


void sort(int arr[], int n) {
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (arr[i]>arr[j])
			{
				swap(&arr[i], &arr[j]);
			}
		}
	}
}


void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int n=3;
	m=3;
	int arr[3][3]={
		{1, 3, 5},      //row 1
    	{2, 6, 9},      //row 2
    	{3, 6, 9},
	};
	printMatrix(arr, n, m);

	int matArray[10000],mm=0;;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			matArray[mm]=arr[i][j];
			mm++;
		}
	}
	int mis=mm/2;
	sort(matArray, mm);
	print(matArray, mm);
	binarySearch(matArray, mm, matArray[mis]);

	//print(matArray, mm);



	return 0;
}