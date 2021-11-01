#include<stdio.h>
#include<stdlib.h>
void rotate(int arr[], int n) { //n=7,k=2
		int x=arr[n-1];
		for (int i=n-1; i>0; i--)
		{			
			arr[i]=arr[i-1];
		}
		 arr[0]=x;
}
void print(int arr[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("Array element number %d:- %d \n", i,arr[i]);
	}
}
int main() {
	printf("Rotation left of an array.\n");
	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9,10};
	print(arr, 10);
	printf("==================================\n");
	rotate(arr, 10);
	print(arr, 10);
}