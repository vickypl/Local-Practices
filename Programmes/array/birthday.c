#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int n,i,j,d,m;
	printf("Enter the number of values in array: \n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the data in array: \n");
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter birth month here:\n");
	scanf("%d %d", &d,&m);
	for (i = 0; i < n; i++)
	{
		for (j=i+1; j < n; j++)
		{
			if (arr[i]+arr[j]=d)
			{
				
			}
		}
	}
}