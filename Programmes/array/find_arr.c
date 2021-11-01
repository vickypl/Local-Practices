#include<stdio.h>
#include<stdlib.h>

void print(int array[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("Array value at %d is %d\n", i,array[i]);
	}
}

int search(int arr[], int n, int num) {
	for(int i=0; i<n; i++) {
		if(arr[i]==num) {
			printf("Data found at index:- %d. \n", i);
			break;
		} else if(i==(n-1) && arr[i]!=num){
			printf("Data not found..\n");
		}
	}
}

int main() {
	int arr[15]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	//print(arr, 15);
	search(arr, 15, 16);
}