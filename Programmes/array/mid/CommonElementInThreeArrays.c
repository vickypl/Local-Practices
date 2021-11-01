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


void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
}



int main(int argc, char const *argv[])
{
	//int arr1[10]={32, 45, 76, 87, 36, 98, 12, 87, 89, 43};
	//int arr2[10]={57, 65, 79, 97, 32, 43, 76, 45, 79, 48};
	//int arr3[10]={32, 65, 78, 67, 45, 87, 12, 87, 89, 47};
	int arr1[10]={12, 32, 36, 43, 45, 76, 87, 88, 89, 98};
	int arr2[10]={32, 43, 45, 48, 57, 65, 76, 78, 79, 97};
	int arr3[10]={23, 32, 45, 47, 65, 67, 78, 87, 88, 89};

	int n=10;

//	quicksort(arr1, 0, 9);
//	quicksort(arr2, 0, 9);
//	quicksort(arr3, 0, 9);

	print(arr1, 10);
	printf("\n");
	print(arr2, 10);
	printf("\n");
	print(arr3, 10);
	printf("\n");
		

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				if ((arr1[i]==arr2[j]) && (arr1[i]==arr3[k]))
				{
					printf("arr1:- %d, arr2:- %d arr3:- %d\n", arr1[i],arr2[j],arr3[k]);
				}
			}
		}
	}

	return 0;
}