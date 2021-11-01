#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int distict_elements(int arr[], int n)
{
int i,j;
int count = 1;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(arr[i] == arr[j] && i != j)
			break;
		}
		if(j == n ) {
		printf("\nNon-repeating element [%d] : %d \n", count,arr[i]);
		count++;
		}
	}
}



int main() {

	int x;
	int arr[10]={1, 3, 6, 8, 3, 4, 7, 2, 7, 4};
	/*
	for (int i = 0; i < 10; ++i)
	{
		bool ele=false,tele=false;
		for (int j = i+1; j < 10; ++j)
		{
			if(arr[i]==arr[j]){
                ele =true;
                x=i;
                break;
            }
            //for (int l = 0; l < 10; ++l)
            //{
            //	if (arr[l]==arr[x])
            //	{
            //		tele=ele;
            //	} else {
            //		tele=false;
            //	}
            //}
		}
		if(!tele) {
	//		printf("%d \n", arr[i]);
		}
	}
	*/
	distict_elements(arr, 10);
}