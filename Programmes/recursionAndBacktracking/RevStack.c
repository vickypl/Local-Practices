#include <stdio.h>
#define MAX 5
int top=-1;
int stack[MAX];
void push(int item) {
	if (top==(MAX-1))
	{
		printf("stack is full\n");
	} else {
		top++;
		stack[top]=item;
	}
}


int pop() {
	int data;
	if (top==-1)
	{ 
		printf("Stack is empty..\n");
		return -1;
	} else {
		data=stack[top];
		top--;
		return data;
	}
}


int peek() {
	return stack[top];
}

//pop->5->4->3->2->1
int tempArr[MAX], t=0;
void stackRec() {
	int temp;
	while(top!=-1) {
		tempArr[t]=pop();
		t++;
	}

	for (int i = 0; i < MAX; ++i)
	{
		push(tempArr[i]);
	}

}

int insertAtbottom(int x) {
	if (top==-1)
	{
		push(x);
	} else {
		int y=peek();
		pop();
		insertAtbottom(x);
		push(y);
	}
}

											
int stackRevRec() {
	if (top!=-1)
	{
		int z=peek();
		pop();
		stackRevRec();
		insertAtbottom(z);
	}		
}

//1->2->3->4->5		

int main(int argc, char const *argv[])
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);			

for (int i = 0; i < MAX; ++i)						
{
	printf("->%d", stack[i]);
}

printf("\n");

//	stackRevRec();
	insertAtbottom(20);
	//printf("popped out: %d\n", pop());
	//stackRec();
for (int i = 0; i < MAX; ++i)
{
	printf("->%d", stack[i]);
}

printf("\n");
	return 0;
}