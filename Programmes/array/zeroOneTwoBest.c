#include <stdio.h>


void swap(int *p,int *q)
{
	int tmp;
    tmp = *p;
    *p=*q;    
    *q=tmp;   
}

int main() {
	int arr[19]={2, 0, 2, 2, 1, 1, 0, 0, 1, 0, 2, 1, 2, 2, 0, 0, 0, 2, 1};
	int n=19;
	int mid=0,low=0,high=n-1;


	while(mid<=high) {

		switch(arr[mid]) {
			case 0:{	
					swap(&arr[low], &arr[mid]);
					low++,mid++;
					break;
					}
			case 1: {
					mid++;
					break;
					}

			case 2: {
					swap(&arr[mid], &arr[high]);
					high--;
					break;
					}
		}
	}

	for (int i = 0; i < 19; ++i)
	{
		printf("%d ", arr[i]);
	}

}