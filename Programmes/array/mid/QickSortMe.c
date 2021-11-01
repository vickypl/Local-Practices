#include <stdio.h>


void swap(int *a, int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}


void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
}


/*
void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
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
*/


void qucksort(int arr[], int first, int last) {

	int pivot,low,high,temp;

	if (first<last)
	{
		pivot=first;
		low=first;
		high=last;
	
		while(low<high) {
			while(arr[low]<=arr[pivot] && low<last) {
				low++;
			}
			while(arr[high]>arr[pivot]) {
				high--;
			}
			if (low<high)
			{
				swap(&arr[low], &arr[high]);
			}
			
		}
			swap(&arr[pivot], &arr[high]);
    		qucksort(arr,first,high-1);
    		qucksort(arr,high+1,last);
    }
}


int main(int argc, char const *argv[])
{
	int arr[10]={54,64,56,43,34,24,74,42,53,94};

	print(arr, 10);

	qucksort(arr, 0, 9);

	print(arr, 10);

	return 0;
}