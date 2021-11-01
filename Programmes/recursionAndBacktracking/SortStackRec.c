#include <stdio.h>
#define MAX 5


void push(int stack[], int *top, int item) {
	if (*top==(MAX-1))
	{
		//printf("stack is full..\n");
	} else {
		*top=*top+1;
		stack[*top]=item;
	}
}

int isEmpty(int *top) {
	if (*top==-1)
		return 1;
	else 
		return 0;
}

int pop(int stack[], int *top) {
	int data=-1;
	if (*top==-1)
	{
		printf("Stack is empty..\n");
		return -1;
	} else {
		data=stack[*top];
		*top=*top-1;
	}
	return data;
}


void test(int *top) {
	*top=*top+1;
}

int peek(int stack[], int *top) {
	return stack[*top];
}

int main(int argc, char const *argv[])
{

	int stack[MAX];
	int stacktemp[MAX];
	int top1=-1;
	int top2=-1;

	push(stack, &top1, 67);
	push(stack, &top1, 34);
	push(stack, &top1, 98);
	push(stack, &top1, 70);
	push(stack, &top1, 43);


	while(top1!=-1) {
		push(stacktemp, &top2, pop(stack, &top1));
	}

		//push(stack, &top1, pop(stacktemp, &top2));
	while(top2!=-1) {

		int tmp=peek(stacktemp, &top2);
			pop(stacktemp, &top2);

			while(top1!=-1 && peek(stack, &top1)>tmp) {
				push(stacktemp, &top2, peek(stack, &top1));
				pop(stack, &top1);
			}
			push(stack, &top1, tmp);
	}

	for (int i = 0; i < MAX; ++i)
	{
		printf("%d \n", pop(stack, &top1));
	}
//	printf("%d\n", pop(stacktemp, &top2));







/*
	pop(stacktemp, &top2);
	printf("top1 %d\n", top1);
//	printf("%d ", pop(stack, top1));

	printf("peek %d\n", peek(stacktemp, &top2));
*/
	printf("\n");

	return 0;
}