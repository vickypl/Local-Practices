#include<stdio.h>
#include<stdlib.h>

void print(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("Data[%d]:%d\n", i,arr[i]);
	}
}

void insertion(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		int j=i-1,key=arr[i];
		while(j >= 0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main() {
	printf("Insertion sorting of an array...\n");
	int arr[10]={4, 1, 9, 2, 3, 8, 6, 16, 7, 12};
	/*
	for (int i = 0; i < 10; ++i)
	{
		int j=i-1,key=arr[i];
		while(j >= 0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	*/
	insertion(arr, 10);
	print(arr, 10);
}