#include <stdio.h>

void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
}


int main() {
	int arr1[10]={71, 23, 34, 35, 96, 65, 72, 98, 77, 86};
	int arr2[10]={23, 34, 66, 28, 35, 77, 78, 87, 75, 78};
	print(arr1, 10);
	print(arr2, 10);
	int n=10;
	int index[10];
	int x=0;
	for (int i = 0; i <n ; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr1[i]==arr2[j])
			{
				index[x]=arr1[i];
				x++;
			}
		}
	}
	printf("Union of arrays:=\n");
	print(index, x);
}