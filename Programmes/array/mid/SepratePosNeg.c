#include <stdio.h>


void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
}

void swap(int *a, int *b) {
	int t=*a;
	*a=*b;
	*b=t;
}

int main(int argc, char const *argv[])
{
	int arr[10]={55,-24,99,-71,33,22,-54,87,-21,43};
	int n=10;
	int temp[100];
	print(arr, 10);
	int x=0;
	for (int i = 0; i < n; ++i)
	{
		if ((i==0) || ((i%2==0) && (arr[i]>0)))
		{
			temp[x]=arr[i];
			x++;
		} else if ((i>0) && ((i%2)!=0) && (arr[i]<0))
		{
			temp[x]=arr[i];
			x++;
		} else if ((i>0) && ((i%2)==0) && (arr[i]<0))
		{
			int p=i;
			//printf("Init p: %d\n", p);
			while(arr[p]>0) {
				p++;
			}
			if (!(arr[p+1]<0))
			{
				temp[x]=arr[i];
				x++;
			} else {				
				swap(&arr[i], &arr[p+1]);
				temp[x]=arr[i];
				x++;
			}
			//printf("p %d wah bhenchod: %d\n", p,arr[p]);
		} else if ((i>0) && ((i%2)!=0) && (arr[i]>0))
		{
			int c=i;
			while(arr[c]<0) {
				c++;
			}
			if (!(arr[c+1]>0))
			{
				temp[x]=arr[i];
				x++;
			} else {				
				swap(&arr[i], &arr[c+1]);
				temp[x]=arr[i];
				x++;
			}
		} else if ((i>0) && ((i%2)!=0) && (arr[i]<0))
		{
			int k=i;
			while(arr[k]>0) {
				k++;
			}
			if (!(arr[k+1]<0))
			{
				temp[x]=arr[i];
				x++;
			} else {				
				swap(&arr[i], &arr[k+1]);
				temp[x]=arr[i];
				x++;
			}
		} else if ((i>0) && ((i%2)!=0) && (arr[i]>0))
		{
			int f=i;
			while(arr[f]>0) {
				f++;
			}
			if (!(arr[f+1]>0))
			{
				temp[x]=arr[i];
				x++;
			} else {				
				swap(&arr[i], &arr[f+1]);
				temp[x]=arr[i];
				x++;
			}
		}
		/*if ((i==0) && (arr[i]<0))
		{
			printf("are betichodd\n");
		}*/
	}

	print(temp, 10);
	return 0;
}