#include <stdio.h>


void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
}


int maxf(int temp[], int n) {
		int max=temp[0];
		for (int k = 0; k < n; ++k)
			{
			if (max<temp[k])
			{
				max=temp[k];
			}
		}
		return max;
}


void finder(int arr[], int n) {  //bigo of n2
	int max,temp[100],maxm[100],m=0,x,sum,hh;
	for (int i = 0; i < n ; ++i)
	{
		x=0,sum=0;
		for (int l = i; l < n; ++l)
		{
			if (i==l)
			{
				temp[0]=arr[i];
				sum=temp[0];
				x++;
			}	else {	
				sum=sum+arr[l];
				temp[x]=sum;
				x++;																		//{1,-3,2,1,-1}
			}

			hh=maxf(temp, x);
		}
		//printf("\n-=-=-=-=-=-=-\n");
		//print(temp, x);
		maxm[m]=hh;
		m++;
	}
	int ans=maxf(maxm, m);
	printf("%d\n", ans);
}


void bruteForce(int arr[], int n) { /////bigo of n3
	int maxSum=0,sum=0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			for (int k = i; k <=j; ++k)
			{
				sum=sum+arr[k];
			}
			if (sum>maxSum)
			{
				maxSum=sum;
			}
		}
	}
	printf("Max sum: %d\n", maxSum);
}


//bigo of n2 by reducing the loop;;;


void sumsub(int arr[], int n) {
	int maxSum=0,sum;
	for (int i = 0; i < n; ++i)
	{
		sum=0;
		for (int j = i; j<n; ++j)
		{
			sum+=arr[j];
		}
		if (sum>maxSum)
		{
			maxSum=sum;
		}
	}
	printf("sumsub sum: %d\n", maxSum);
}



//best approach bigo of n;;;;;;;;;

int maxx(int a, int b) {
	if (a>b)
		return a;
	else
		return b;
}

void bestAnswer(int arr[], int n) {

	int maxSoFar=0;//arr[0];
	int maxEnd=0;//arr[0];

	for (int i = 0; i < n; ++i)
	{
		maxEnd=maxEnd+arr[i];
		if (maxSoFar<maxEnd)
		{
			maxSoFar=maxEnd;
		}
		if (maxEnd<0)
		{
			maxEnd=0;
		}
	}
	printf("%d\n", maxSoFar);
}




int main(int argc, char const *argv[])
{
	int arr[5000];//={-1, -2, -3, -4};//,n,t;//={1,-3,2,1,-1};//={1, 2, 3, -2, 5};
	int n,t;
	//bruteForce(arr, 5);
	//sumsub(arr, 5);
	//bestAnswer(arr, 4);

	scanf("%d", &t);	
for (int x = 0; x < t; ++x)
{
	scanf("%d", &n);
	for (int j = 0; j < n; ++j)
	{
		scanf("%d", &arr[j]);
	}
	bestAnswer(arr, 5);	
	//finder(arr, 5);
}
	return 0;
}