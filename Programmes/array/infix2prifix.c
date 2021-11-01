    # include <stdio.h>
    # include <string.h>
    # define MAX 20
    void infixtoprefix(char infix[20],char prefix[20]);
    void reverse(char array[30]);
    char pop();
    void push(char symbol);
    int isOperator(char symbol);
    int prcd(symbol);
    int top=-1;
    char stack[MAX];
    int main() {
    	char infix[20],prefix[20],temp;
    	printf("Enter infix operation: ");
    	gets(infix);
    	infixtoprefix(infix,prefix);
    	reverse(prefix);
    	puts((prefix));
    }
    //--------------------------------------------------------
    void infixtoprefix(char infix[20],char prefix[20]) {
    	int i,j=0;
    	char symbol;
    	stack[++top]='#';
    	reverse(infix);
    	for (i=0;i<strlen(infix);i++) {
    		symbol=infix[i];
    		if (isOperator(symbol)==0) {
    			prefix[j]=symbol;
    			j++;
    		} else {
    			if (symbol==')') {
    				push(symbol);
    			} else if(symbol == '(') {
    				while (stack[top]!=')') {
    					prefix[j]=pop();
    					j++;
    				}
    				pop();
    			} else {
    				if (prcd(stack[top])<=prcd(symbol)) {
    					push(symbol);
    				} else {
    					while(prcd(stack[top])>=prcd(symbol)) {
    						prefix[j]=pop();
    						j++;
    					}
    					push(symbol);
    				}
    				//end for else
    			}
    		}
    		//end for else
    	}
    	//end for for
    	while (stack[top]!='#') {
    		prefix[j]=pop();
    		j++;
    	}
    	prefix[j]='\0';
    }
    ////--------------------------------------------------------
    void reverse(char array[30]) {
    	int i,j;
    	char temp[100];
    	for (i=strlen(array)-1,j=0;i+1!=0;--i,++j) {
    		temp[j]=array[i];
    	}
    	temp[j]='\0';
    	strcpy(array,temp);
    	return array;
    }
    //--------------------------------
    char pop() {
    	char a;
    	a=stack[top];
    	top--;
    	return a;
    }
    //----------------------------------
    void push(char symbol) {
    	top++;
    	stack[top]=symbol;
    }
    //------------------------------------------
    int prcd(symbol) {
    	switch(symbol) {
    		case '+':
    		        case '-':
    		        return 2;
    		break;
    		case '*':
    		        case '/':
    		        return 4;
    		break;
    		case '$':
    		        case '^':
    		        return 6;
    		break;
    		case '#':
    		        case '(':
    		        case ')':
    		        return 1;
    		break;
    	}
    }
    //-------------------------------------------------
    int isOperator(char symbol) {
    	switch(symbol) {
    		case '+':
    		        case '-':
    		        case '*':
    		        case '/':
    		        case '^':
    		        case '$':
    		        case '&':
    		        case '(':
    		        case ')':
    		        return 1;
    		break;
    		default:
    		        return 0;
    		// returns 0 if the symbol is other than given above
    }
}

/*
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define SIZE 8
int top=-1;
int pot=-1;
int stack[SIZE], arraye[SIZE];
char lef,temp;
void push(int item) {
	if (top==SIZE-1) {
		printf("Stack is full...\n");
	} else {
		top++;
		stack[top]=item;
		//printf("ji bhiya..\n");
	}
}
//================
void ps(int item) {
	if (pot==SIZE-1) {
		printf("Stack is full...\n");
	} else {
		pot++;
		arraye[pot]=item;
		//printf("ji bhiya..\n");
	}
}


int pp() {
	int data;
	if (pot==-1)
	{
		printf("Stack is full..\n");
	} else {
		data=arraye[pot];
		pot--;
	}
	return data;
}
//==================
int pop() {
	int data;
	if (top==-1)
	{
		printf("Stack is full..\n");
	} else {
		data=stack[top];
		top--;
	}
	return data;
}

int is_oprator(char x) {
	if (x=='+' || x=='-' || x=='/' || x=='*')
	{
		return 1;
	} else {
		return 0;
	}
}

int is_operand(char x) {
	if (x>='A' && x<='Z')
	{
		return 1;
	} else {
		return 0;
	}
}

int precedence(char x) {
	if (x=='*' || x=='/') {
		return 3;
	} else if (x=='+' || x=='-') {
		return 2;
	} else {
		return 1;
	}
}

void infix2prifix(char string[], char prifix[]) {
	int k=0;
	push(')');
	string[SIZE]='(';
	for (int i = 0; i < SIZE; i++)
	{
		char item=string[i];
		if (is_operand(item))
		{
			prifix[k]==item;
			k++;
		} else if (item==')') {
			push(item);
		} else if (is_oprator(item)) {
			while(precedence(temp)>=precedence(item)) {
				char temp=pop();
				prifix[k]=pop();
				k++;
			}
			push(item);
		} else if (item=='(') {
			while(lef!=')') {
				char lef=pop();
				prifix[k]=lef;
				k++;
			}
			pop();
		} else if (item==')')	{
			push(')');
		}
	}
	printf("Done..\n");
}

void print(char string[], int n) {
	for (int i = 0; i < n; ++i)
	{
		printf("%c", string[i]);
	}
}

void reverse(char array[30]) {
	int i=0,j=0;
	while(array[i]!='\0') {
		ps(array[i]);
		i++;
	}
	while(pot!=-1) {
		array[j]=pp();
		j++;
	}
	//return array;
}

int main() {
	char string[SIZE]={'(', 'A', '+', 'B', ')', '+', 'C'}, prifix[SIZE];
	//char x='H';
	//int y=is_operand(x);
	//printf("%d\n", y);
	reverse(string);
	//reverse(string);
	infix2prifix(string, prifix);
	reverse(prifix);
	print(string, SIZE);
	//(A+B)+C prifix is ++ABC
	//string[SIZE]='(';
	//print(string, 8);
	//printf("\n");
	//infix2prifix(string, prifix);
	//print(prifix, 50);
}
*/