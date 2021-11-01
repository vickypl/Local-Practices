#include<stdio.h>

void print(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("Data[%d]:%d\n", i,arr[i]);
	}
}


int main() {
	printf("Bubble sorting of an array ...\n");
	int arr[10]={4, 1, 9, 2, 3, 8, 6, 16, 7, 12};
	print(arr, 10);
	printf("After sorting...\n");

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 10-1; ++j)
		{
			if (arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	print(arr, 10);
}