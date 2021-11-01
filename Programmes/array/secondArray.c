#include<stdio.h>
#include<stdlib.h>

int main() {
	//printf("Second heighest in the array: ");
	int arr[10]={101, 2, 106, 104, 5, 105, 9, 43, 103, 102};
	//int arr[10]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i=0,first;
	int Second,third=0;
	for (int j = i+1; j < 10; j++) {
			if (arr[i]<arr[j]) {
				arr[i]=arr[j];
				first=arr[j];
			} 
	}
	for (int k = 0; k < 10; k++) {
			if (arr[k]<first && arr[k]>Second) {
					Second=arr[k];
			}
	}
	int d=0;
	for (int l = d+1; l < 10; ++l)
	{
		if (arr[d]<Second && arr[d]>arr[l])
		{
			arr[d]=arr[l];
			third=arr[d];
		}
	}


	printf("First heighest: %d \n", first);
	printf("Second heighest: %d \n", Second);
	printf("Third heighest: %d \n", third);
}