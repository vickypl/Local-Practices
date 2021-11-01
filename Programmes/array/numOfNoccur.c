#include <stdio.h>

int main() {
	int arr[16]={32, 56, 43, 32, 64, 43, 42, 43, 56, 32, 43, 56, 56, 34, 43, 70};
	int n=16;
	int len=sizeof(arr)/sizeof(arr[0]); 
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	//printf("VALUE OF LEN: %d\n", len);

	int frequency[100],x=0,count=1,visited=-1;

	for (int i = 0; i < n; ++i)
	{
		count=1;
		for (int j = i+1; j < n; ++j)
			{
				if (arr[i]==arr[j])
				{
					count++;
					frequency[j]=visited;
				}
			}
			if (frequency[i]!=visited)
			{
				frequency[i]=count;				
			}
	}

	for (int i = 0; i < n; ++i)
	{
		if (frequency[i]!=visited)
		{
			printf("Number: %d\t frequency: %d\n", arr[i],frequency[i]);
		}
	}

}