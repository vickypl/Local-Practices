#include <stdio.h>
#define SIZE 100

void print(int array[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("Array value at %d is %d\n", i,array[i]);
	}
}

int main() {
	int arr[SIZE];
	int size;
	printf("Enter the number of element you want to insert(1-100): \n");
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	print(arr, size);
	printf("Enter to Element and positon to insert at the newly created element: \n");
	int ele,pos;
	scanf("%d %d", &ele,&pos);
	size=size+1;
	for (int i = size+1; i > pos; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=ele;
	print(arr, size);

}