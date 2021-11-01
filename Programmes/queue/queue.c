#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CAPACITY 10


//int queue[CAPACITY];
int size  = 0;
int rear  = 0; 
int front = 0;

void enque(int array[], int item) {
	if (size==CAPACITY)
	{
		printf("Overflow..\n");
	} else {
		array[rear]=item;
		rear++;
		size++;
		printf("Enqued..\n");
	}
}

int deque(int array[]) {
	int data;
	if (size==0)
	{
		printf("Underflow..\n");
	} else {
		data=array[front];
		front++;
		size--;
		printf("Dequed..\n");
		//printf("%d\n", data);
	}
	return data;
}

int main() {
	int array[CAPACITY];
	enque(array, 10);
	enque(array, 15);
	enque(array, 20);
	enque(array, 25);
	enque(array, 30);
	enque(array, 30);

	enque(array, 25);
	enque(array, 30);
	enque(array, 30);
	enque(array, 25);
	enque(array, 30);
	enque(array, 30);
	deque(array);
	deque(array);
	deque(array);
	deque(array);
	deque(array);
	deque(array);
}