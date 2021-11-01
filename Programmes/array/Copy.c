#include<stdio.h>
#include<stdlib.h>
int main() {
	printf("Copying array....");
	int arr1[5]={1, 3, 6, 4, 8},arr2[5];
	for(int i=0; i<5; i++) {
		arr2[i]=arr1[i];
	}
	for(int j=0; j<5; j++) {
		printf("Array2 %d \n", arr2[j]);
	}
}
