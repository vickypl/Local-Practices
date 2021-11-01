#include<stdio.h>
#include<stdlib.h>

void print(int arr[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("Array element number %d:- %d \n", i,arr[i]);
	}
}

void rev_rot(int arr[], int n, int d) {
	int i,j,ar[d];
	i = n-d;
		j=0;
		while(j<d) {
			ar[j]=arr[i];
			i++;
			j++;	
		}
//		print(ar, d);
		
		for (int i = n-1; i > 0; i--)
		{
			arr[i]=arr[i-d];
		}
		for (int i = 0; i < d; i++)
		{
			arr[i]=ar[i];
		}

}

int main() {
	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	rev_rot(arr, 10, 3);
	print(arr, 10);

}
