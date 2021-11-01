#include <stdio.h>
#include <stdbool.h>
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
	int temp[20];
	int n=10;
	print(arr1, n);
	print(arr2, n);
	bool hai=true;
	int x=0;

	for (int i = 0; i < 20; ++i)
	{
		if (i<10)
		{
			temp[i]=arr1[i];
		}
		if (i>=10)
		{
			temp[i]=arr2[x];
			x++;
		}
	}

	for (int i = 0; i < 20; ++i)
	{
		for (int j = i+1; j < 20; ++j)
		{
			if (temp[i]==temp[j])
			{
				temp[j]=-1;
			}
		}
		if (temp[i]!=-1)
		{
			printf("%d ", temp[i]);
		}
	}
	printf("\n");



	//print(temp, 20);

}