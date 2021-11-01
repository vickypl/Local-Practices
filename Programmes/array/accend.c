#include<stdio.h>
#include<stdlib.h>

void print(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("Data[%d]:%d\n", i,arr[i]);
	}
}

/*
void sort(int array, int n) {


}
*/
int main() {
	int array[10]={2,4,10,1,6,9,3,7,5,8};
	//print(array, 10);
	int x,i=0,smallest;
		for (int j=i+1; j < 10; ++j)
		{
			if(array[i]>array[j]) {
				array[i]=array[j];
				smallest=array[i];
				x=i;
				break;
			}
		}
		int temp=array[x];
			array[0]=array[i];
			array[i]=temp;
	//		printf("Array 1:%d\n", array[0]);
	//		printf("Array 2:%d\n", array[1]);
	//		printf("Array 3:%d\n", array[2]);
	//		printf("Array 4:%d\n", array[3]);
printf("Smallest: %d\n", smallest);
}