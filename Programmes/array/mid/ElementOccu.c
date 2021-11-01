#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[16]={54,43,88,54,87,90,54,65,43,34,43,46,65,87,67,43};
	int n=16;
	int result[100],r=0;
	int count;
	for (int i = 0; i < n; ++i)
	{
		count=1;
		for (int j = i+1; j < n; ++j)
		{
			if (arr[i]==arr[j])
			{
				count++;
				arr[j]=-1;
			}
		}
		result[r]=count;
		r++;
		if (arr[i]!=-1)
		{
			printf("Data: %d Freq: %d\n", arr[i],result[i]);
		}
	}

	return 0;
}