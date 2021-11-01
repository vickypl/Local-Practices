#include<stdio.h>

int main() {
	int arr[8]={1, 6, -2, -5, 9, 10, -7, 3};
	printf("Value of array: \n");
	for (int i = 0; i < 8; ++i)
	{
		if (arr[i]<0)
		{
			printf("%d \n", arr[i]);
		}
		//printf("%d \n", arr[i]);
	}
	int count=0;
	for (int i = 0; i < 8; ++i)
	{	
		if (arr[i]<0) {
			count++;
		}
	}
	printf("Total negetive Values:-> %d\n", count);
}