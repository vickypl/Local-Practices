#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
	int arr[]={26,42,60,82,31,40,24,63};
	int n=sizeof(arr)/sizeof(arr[0]);
	int num=97;
	bool yes=false;
	int count=0;

	for (int i = 0; i < n; ++i)
	{
		for (int j=i+1; j < n; ++j)
		{
			for (int k=j+1; k < n; ++k)
			{
				if ((arr[i]+arr[j]+arr[k])==num)
				{
					printf("[%d]+[%d]+[%d]=%d\n", arr[i],arr[j],arr[k],num);
					yes=true;
					count++;
					break;
				}
			}
		}
	}
	if (!yes)
	{
		printf("No sum is equal to %d\n", num);
	} else {
		printf("Total pairs found %d\n", count);
	}

	return 0;
}