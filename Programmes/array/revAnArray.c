#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[8]={1, 2, 3, 4, 5, 6, 7, 8};
	int x=0,y=8-1;

	for (int i = 0; i < 4; ++i)
	{
		printf("%d\t", arr[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		int temp=arr[x];
		arr[x]=arr[y];
		arr[y]=temp;
		x++;
		y--;
	}

	printf("\n");

	for (int i = 0; i < 8; ++i)
	{
		printf("%d\t", arr[i]);
	}
}