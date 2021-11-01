#include <stdio.h>


void print(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		{
			printf("%d ", arr[i]);
		}
}



int main(int argc, char const *argv[])
{
	int arr[12]={23,56,111,34,54,87,79,77,90,12,99,76};
	int first=0,second=0,third=0; 
    for (int i = 0; i < 12; i++) { 

        if (arr[i] > first) { 
            third = second; 
            second = first; 
            first = arr[i];
            printf("third %d\n", third);
            printf("second %d\n", second);
	        printf("first %d\n", first);
        } 
  
        else if (arr[i] > second) { 
            third = second; 
            second = arr[i]; 
        } 
  
        else if (arr[i] > third) 
            third = arr[i]; 
    } 
	printf("first Largest: %d\n", first);
	printf("Second Largest: %d\n", second);
	printf("Third Largest: %d\n", third);

	return 0;
}