#include <stdio.h>

int main() {
	int arr[10]={18, 34, 76, 93, 25, 42, 79, 65, 96, 2};
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", arr[i]);
	}

	int largest=arr[0],secondLargest;
	int smallest=arr[0];
	for (int i = 1; i < 10; ++i)
	{
		if (arr[i]>largest)
		{
			secondLargest=largest;
			largest=arr[i];
		}
		if (smallest>arr[i])
		{
			smallest=arr[i];
		}
	}
	printf("\nLargest: %d\n", largest);
	printf("\nSecond Largest: %d\n", secondLargest);
	printf("\nSmallest: %d\n", smallest);

}