#include<stdio.h>
int main()
{
	int arr[100];
	int number,n,d;
	scanf("%d", &number);

	for (int i = 0; i < number; ++i)
	{
		scanf("%d %d", &n,&d);	
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &arr[j]);
		}
		for (int l = 0; l < d; ++l)
		{
			int temp=0;
			int x = arr[0];
	    	for (int j = 0; j < n; j++) {
	        	temp=arr[j];
	         	arr[j] = arr[j + 1];
	         	arr[j+1]=temp;
	      	}
	      	arr[n - 1] = x;
	
		}
		printf("\n");
		for (int k = 0; k < n; ++k)
			{
		    	if(k<n-1)
				printf("%d ", arr[k]);
		    	else
		    	printf("%d", arr[k]);
			}
	}
	return 0;
}