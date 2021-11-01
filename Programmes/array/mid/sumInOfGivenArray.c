#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int item=22,count=0;
	for (int i = 0; i < 14; ++i)
	{
		for (int j = i+1; j < 14; ++j)
		{
			if ((arr[i]+arr[j])==item)
			{
				count++;
				printf("(%d,%d)\n", arr[i],arr[j]);
			}
		}
	}
	printf("Total pairs: %d\n", count);

	return 0;
}