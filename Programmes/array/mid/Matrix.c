#include <stdio.h>


int m;
void printMatrix(int arr[][m], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("[%d] ", arr[i][j]);
			if (j==n-1)
			{
				printf("\n");
			}
		}
	}
}

void find(int arr[][m], int n, int m, int item) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (arr[i][j]==item)
			{
				printf("Found at index [%d][%d]\n", i+1,j+1);
			}
		}
	}
}


void rawMaxOne(int arr[][m], int n, int m) {
	
	int raw,max=0,count2=0;

	for (int i = 0; i < n; ++i)
	{
		int count=0;
		for (int j = 0; j < m; ++j)
		{
			if (arr[i][j]==1)
			{
				count++;
				//raw=i+1;
			}
		}
		if (count>max)
		{
			max=count;
			raw=raw=i+1;
		}
	}

	printf("Max no. of one's in the raw:-> %d\n", raw);

}


int main(int argc, char const *argv[])
{
	int n=4;
	m=4;
	int arr[4][4]={
		{1, 2, 3, 4},      //row 1
    	{5, 6, 7, 8},      //row 2
    	{9, 1, 1, 12},
     	{13, 11, 11, 1}
	};
/*	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}
*/

	printMatrix(arr, n, m);


//	find(arr, n, m, 7);


rawMaxOne(arr, n, m);

	return 0;
}