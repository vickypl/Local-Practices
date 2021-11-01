#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[]={53, 46, 45, 35, 65, 87, 76, 78, 77, 97};
	int size=sizeof(arr)/sizeof(arr[0]);

	int smallestNow=0;
	int smallest=arr[0];
	int count=0;
	for (int i = 0; i < size; ++i)
	{
		if (smallest>arr[i])
		{
			smallest=arr[i];
			count++;
			smallestNow=arr[i];
		}
		if (smallestNow<arr[i] && count==3)
		{
			smallest=arr[i];
			break;
		}

	}

	printf("smallest: %d\n", smallest);
	return 0;
}