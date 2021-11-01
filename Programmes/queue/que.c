#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5
int front=0;
int rear=0;
int que[CAPACITY];

void enque(int data) {
	if (rear==CAPACITY)
	{
		printf("Overflow..\n");
	} else {
		que[rear]=data;
		rear++;
	}
}


int deque() {
	int data;
	if (front==rear)
	{
		printf("Underflow..\n");
	} else {
		printf("Dequed element: %d\n", que[front]);
		data=que[front];
		for (int i = front; i < rear-1; ++i)
		{
			que[i]=que[i+1];
		}
		rear--;
	}
	return data;
}

void display() {
	if (front==rear)
	{
		printf("Que is empty..\n");
	} else {
		for (int i = front; i < rear; ++i)
		{
			printf("Element at [%d]: %d\n", i,que[i]);
		}
	}
}


int peak() {
	return que[front];
}
int main()
{

	enque(20);
	enque(30);
	enque(40);
	enque(50);
	enque(60);
	display();
	deque();
	int x=peak();
	printf("%d\n", x);
/*	enque(10);
	deque();
	deque();
	deque();
	deque();
	deque();
	display();
	enque(10);
	enque(20);
	enque(30);
	enque(40);
	enque(50);
	display();
	enque(50);*/
	return 0;
}
