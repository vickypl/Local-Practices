#include <stdio.h>

void swap(int *a, int *b) {
	int temp=*a;
		*a=*b;
		*b=temp;
}


int main(int argc, char const *argv[])
{
	int arr[]={48, 23, 43, 54, 64, 56, 57, 65, 76, 87, 67, 85};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", size);

	for (int k = 0; k < size; ++k)
	{
		printf("%d ", arr[k]);
	}
	printf("\n");

	for (int i = 0; i < size; ++i)
	{
		for (int j = i+1; j < size; ++j)
		{
			if (arr[i]>arr[j])
			{
				swap(&arr[i],&arr[j]);
			}
		}
	}

	for (int k = 0; k < size; ++k)
	{
		printf("%d ", arr[k]);
	}
	printf("\n");
	return 0;

}