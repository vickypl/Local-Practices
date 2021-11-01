#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
}


void swap(int *a, int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main() {
	int arr1[8]={23, 34, 66, 35, 77, 54, 75, 78};
	int arr2[10]={71, 23, 34, 35, 96, 65, 72, 98, 77, 86};
	int temp[20];
	int len1=8;
	int len2=10;
	int x,n=10;
	print(arr1, len1);
	print(arr2, n);

	
	if (len2>len1)
	{
		for (int i = 0; i < len1; ++i)
		{
			for (int k = i+1; k < len1; ++k)
			{
				if (arr1[i]>arr1[k])
				{
					swap(&arr1[i], &arr1[k]);
				}
			}
		}
		for (int j = 0; j < len1; ++j)
		{
			temp[j]=arr1[j];
		}
		x=len1;
		for (int l = 0; l < len2; ++l)
		{
			int item=arr2[l];
			int l=0,u=len1-1;
			int m;
			int id=1;
			while(l<=u) {
				m=(l+u)/2;
				if (item==arr1[m])
				{
					printf("%d\n", arr1[m]);
					id=54;
					break;
				} else if (item>arr1[m])
				{
					l=m+1;
				} else {
					u=m-1;
				}
				//printf("===\n");
			}
			if (id==1)
			{
				temp[x]=item;
				x++;
			}

		}

	}

	print(temp, x);

}