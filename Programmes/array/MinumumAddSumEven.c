#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8};
	int size=sizeof(arr)/sizeof(arr[0]);

	int sum=0;

	for (int i = 0; i < size; ++i)
	{
		sum=sum+arr[i];
	}

	printf("Sum: %d\n", sum);
	
	if (sum%2==0)
	{
		printf("%d\n", 2);
	} else {
		printf("%d\n", 1);
	}
	return 0;
}