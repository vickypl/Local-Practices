#include <stdio.h>


void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main(int argc, char const *argv[])
{
	int arr[9]={0, 1, 2, 2, 4, 5, 5, 5, 8};

	int index;
	int count=0,max=0;
	for (int i = 0; i < 9; ++i)
	{	
		count=0;	
		for (int j = 1; j < 9; ++j)
		{			
			if (arr[i]==arr[j])
			{
				count++;
				if (count>max)
				{
					index=j;
				}
			}
		}
		max=count;
	}
	printf("Number is %d\n", arr[index]);
	printf("Last index:- %d\n", index);
	return 0;
}