#include<stdio.h>
#include<stdlib.h>
void print(int arr[]) {
	for(int i=0; i<6; i++) {
		printf("%d\n", arr[i]);
	}
}
int i,j,temp;
void sort(int arr[]) {
	 for(i=0;i<5;i++){
      for(j=i+1;j<6;j++){
         if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
   }
}
int main() {
	int arr[6]={5,4,3,9,8,2};
	print(arr);
	printf("===================================== \n");
	sort(arr);
	print(arr);
	return 0;
}