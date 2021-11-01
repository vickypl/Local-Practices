#include<stdio.h>
#include<stdlib.h>

void rvereseArray(long long int arr[], int start, int end)
{
    long long int temp;
    while (start < end)
    {
        temp = arr[start];   
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }   
}   


int main() {
	long long int test,n,d,arr[100000];
	scanf("%lli", &test);
	for (int k = 0; k < test; ++k)
	{
		scanf("%lli %lli", &n,&d);
		for (int l = 0; l < n; l++)
		{
			scanf("%lli", &arr[l]);
		}
		rvereseArray(arr, 0, d-1);
		rvereseArray(arr, d, n-1);
		for (int i = 0; i < n; ++i)
		{
			printf("%lli ", arr[i]);
		}
	}
}

//5,4,3,2,1
//3 2 1 5 4