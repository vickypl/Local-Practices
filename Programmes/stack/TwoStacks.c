#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int top1=-1;
int top2=-1;

int arr1[MAX];
int arr2[MAX];
void push1(int item) {
	if (top1==MAX-1)
	{
		printf("Stack is full..\n");
	} else {
		top1++;
		arr1[top1]==item;
	}
}

void push2(int item) {
	if (top2==MAX-1)
	{
		printf("Stack is full..\n");
	} else {
		top2++;
		arr2[top2]==item;
	}
}


int pop1() {
	int data=-1;
	if (top1==-1)
	{
		printf("Stack is Empty..\n");
	} else {
		data=arr1[top1];
		top1--;
	}
	return data;
}


int pop2() {
	int data=-1;
	if (top2==-1)
	{
		printf("Stack is Empty..\n");
	} else {
		data=arr2[top2];
		top2--;
	}
	return data;
}




int main(int argc, char const *argv[])
{
	push1(5);
	push1(4);
	push1(1);
	push1(2);
	push1(6);
	push1(4);
	//======
	push2(5);
	push2(4);
	push2(1);
	push2(2);
	push2(6);
		push2(6);


		pop1();
		pop1();
		pop1();
		pop1();
		pop1();
		pop1();
		pop2();
		pop2();
		pop2();
		pop2();
		pop2();
		pop2();																
		return 0;
}