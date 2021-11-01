#include <stdio.h>
#include <stdlib.h>
struct node {
  int key;
  struct node *left, *right;
};

struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);

  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}
void preorder(struct node *root) {
	if(root!=NULL) {
		printf("%d -> ", root->key);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root) {
	if(root!=NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%d -> ", root->key);
	}
}
void delete(struct node *head, int value) {
	struct node *temp=head;
	while(temp->right!=NULL || temp->left!=NULL) {
		while(temp->key!=value) {
			if(temp->key==value && temp->right==temp->left==NULL) {
				free(temp);
			}
			temp=temp->left;
			if(temp->key==value && temp->right==temp->left==NULL) {
				free(temp);
			}
			temp=temp->right;
		}
	}
}
int main() {
  struct node *root = NULL;
  root = insert(root, 11);
  root = insert(root, 6);
  root = insert(root, 8);
  root = insert(root, 19);
  root = insert(root, 4);
  root = insert(root, 10);
  root = insert(root, 5);
  root = insert(root, 17);
  root = insert(root, 43);
  root = insert(root, 49);
  root = insert(root, 31);
  printf("Inorder traversal: ");
  inorder(root);
  //printf("\nPreorder traversal:-");
  //preorder(root);
  //printf("\nPostorder traversal:-");
  //postorder(root);
  delete(root, 6);
}