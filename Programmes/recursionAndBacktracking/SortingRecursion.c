#include <stdio.h>

void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
}


void sort(int arr[], int n) {
    if (n == 1)
        return; 
    for (int i=0; i<n-1; i++) {
    	
        if (arr[i] > arr[i+1]) {
        	int temp=arr[i];
        	arr[i]=arr[i+1];
        	arr[i+1]=temp;
        }
       // print(arr, n);
    }
    		sort(arr, n-1);
}


int main(int argc, char const *argv[])
{
	int arr[]={6,8,2,1,4,9,0,5,3,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	sort(arr, n);	
	print(arr, n);
	return 0;
}