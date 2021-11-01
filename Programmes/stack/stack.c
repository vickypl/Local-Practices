#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int top=-1;
void push(int arr[], int data) {
	if (top==SIZE-1)
	{
		printf("Overflow.....\n");
	} else {
		top=top+1;
		arr[top]=data;
		//printf("Submitted...\n");
	}
}

void pop(int arr[]) {
	int data;
	if (top==-1)
	{
		printf("Stack is empty...\n");;
	} else {
			data=arr[top];
			top=top-1;
			printf("%d \n", data);
		//	prf("Top:%d\n", top);
	}
}

int main()
{	

	
	int arr[10];

	push(arr, 1);
	push(arr, 2);
	push(arr, 3);
	push(arr, 4);
	push(arr, 5);
	push(arr, 6);
	push(arr, 7);
	push(arr, 23);
	push(arr, 98);
	push(arr, 23);
//	push(arr, 98);
//	push(arr, 98);



	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);
	pop(arr);
/*
//	pop(arr);
//	pop(arr);

	
	
	int count=0;
	while (count<5) {
		int a=pop(arr);
		printf("%d\n", a);
		printf("Top: %d\n", top);
		count++;
	}
		printf("Top: %d\n", top);
	int c=pop(arr);
	//	printf("%d\n", c);
	*/
	return 0;
}