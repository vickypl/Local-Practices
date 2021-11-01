#include<stdio.h>
#include<stdlib.h>

void print(int array[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("Array value at %d is %d\n", i,array[i]);
	}
}

int main() {
	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	print(arr, 10);
	int i=0,del;
	printf("Enter the element you want to delete:\n");
	scanf("%d", &del);
	while(arr[i]!=del) {
		i++;
	}
//	printf("%d\n", arr[i]);

	for (int j = i; i < 9; i++)
	{
		arr[j]=arr[j+1];
	}
	print(arr, 9);

	return 0;
}