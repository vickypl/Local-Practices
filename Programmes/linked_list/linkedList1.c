#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head;
void createlist(int n) {
		struct node *temp, *newnode;
		int item,i;
		printf("Enter the data to insert in the node 1:\n");
		scanf("%d", &item);
		head=(struct node *)malloc(sizeof(struct node));
		if (head==NULL)
		{
			printf("Unable to locate the memory..\n");
		} else {
			head->data=item;
			head->next=NULL;
		}
		temp=head;
		for (i = 2; i <=n; ++i)
		{
			printf("Enter the data for node %d:\n", i);
			scanf("%d", &item);
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=item;
			newnode->next=NULL;
			temp->next=newnode;
			temp=temp->next;
		}		
}

void printlist(struct node *root) {
	struct node *temp=root;
	while(temp!=NULL) {
		printf("%d\n", temp->data);
		temp=temp->next;
	}
}

int main() {
	int x;
	printf("Enter the number of nodes you want to creat:\n");
	scanf("%d", &x);
	createlist(x);
	printlist(head);

	return 0;
}