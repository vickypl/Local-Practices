#include <stdio.h>

void quicksort(int number[],int first,int last){
int i,j,pivot,temp;
if(first<last) {
		pivot=first;
		i=first;
		j=last;
while(i<j) {
		while(number[i]<=number[pivot]&&i<last) {
			i++;
		}
		while(number[j]>number[pivot]) {
			j--;
		}
			if(i<j) {
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
			temp=number[pivot];
			number[pivot]=number[j];
			number[j]=temp;
			quicksort(number,first,j-1);
			quicksort(number,j+1,last);
		}
}


/*void quickSort(int arr[], int n) {

	int temp, first, last, mid;

	if (first<last)
	{
		first=0;
		last=n-1;
		
	}


}*/

void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
}

int main(int argc, char const *argv[])
{
	int arr[12]={23,56,78,34,54,87,79,77,90,12,99,76};
	print(arr, 12);
	printf("\n");

	quicksort(arr, 0, 11);
	print(arr, 12);
	printf("\n");


	return 0;
}