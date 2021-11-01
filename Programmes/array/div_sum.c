#include<stdio.h>
#include<stdlib.h>

int main() {
	int n,k;
	scanf("%d %d", &n,&k);
	int arr[n];
	int count=0,i,j;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n; j++)
		{	
			if((arr[j]>arr[i]) && (((arr[i]+arr[j])%k)==0)) {
				printf("%d, %d\n", arr[i],arr[j]);
				++count;
			}
		}
	}
	printf("%d\n", count);

}