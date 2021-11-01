#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;	
};
struct node *head;
struct node *createlist(int n) {
	int i,x;
	printf("Enter the data in the node 1..\n");
	scanf("%d", &x);
	struct node *temp, *newnode;
	head=(struct node *)malloc(sizeof(struct node));
	head->data=x;
	head->next=NULL;
temp=head;
	for (int i = 2; i <= n; ++i)
	{
		printf("Enter the data to insert into node %d:\n", i);
		scanf("%d", &x);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		temp->next=newnode;
		temp=temp->next;
	}
	return head;
}
void display(struct node *head) {
	struct node *temp=head;
	while(temp!=NULL) {
		printf("Value:- %d \n", temp->data);
		temp=temp->next;
	}
}
int main() {
	int n;
	printf("Enter the number of node you want to create..\n");
	scanf("%d", &n);
	struct node *head;
	head=createlist(n);
	//display(head);
	int d;
	printf("Enter the 2nd number of node you want to create..\n");
	scanf("%d", &d);
	struct node *dead;
	dead=createlist(d);
	display(head);
	display(dead);
}