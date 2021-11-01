#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define MAX 5
int top=-1;
void push(int array[], int item) {
	if (top==MAX-1)
	{
		printf("Stack is full.\n");
	} else {
		top=top+1;
		array[top]=item;
	}
}

int pop(int array[]) {
	int data;
	if (top==-1)
	{
		printf("Stack is empty..\n");
	}
	data=array[top];
	top=top-1;
	return data;
}

void sorting(int array[]) {
	int temp;
	for (int i = 0; i < MAX; ++i)
	{
		for (int j = i+1; j < MAX; ++j)
		{
			if (array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
}


int main() {
	int array[MAX];
	push(array, 40);
	push(array, 30);
	push(array, 50);
	push(array, 20);
	push(array, 10);
	sorting(array);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", array[i]);
	}
	int x=pop(array);
	printf("ye hai x:->%d\n", x);
	clock_t t;
	t=clock();
	printf("%f\n", t);
}