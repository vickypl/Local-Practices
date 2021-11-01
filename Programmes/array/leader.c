#include <stdio.h>
#include<stdlib.h>

int main() {
	int y,x,n,array[1000];
	int temp[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		y=0;
		scanf("%x", &x);
		for (int j = 0; j < x; ++j)
		{
			scanf("%d", &array[j]);
		}
		for (int k = 0; k < x; ++k)
		{
			if (array[k]>array[k+1])
			{
				temp[y]=array[k];
				y++;
			}
		}
		temp[y]=array[x];
		for (int m = 0; m < y; ++m)
		{
			printf("%d ", temp[m]);
		}
		printf("\n");
	}
}