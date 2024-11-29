//Q.2 Write a C program to create a binary search tree of integers and perform following operation. 
//i. Pre-order traversal 
//ii. Post-order traversal /

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left,*right;
}node;
//fun decleartion
node *createNode(int val);
node *insertNode(node *head,int val);
void preorderTraversal(node *head);
void postorderTraversal(node *head);

int main()
{
	node *head=NULL;
	int ch,val;
	do
	{
		printf("\n1 Insert");
		printf("\n2 preOrder:");
		printf("\n3 postOrder:");
		printf("\n Exit:");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter value to insert:");
				scanf("%d",&val);
				head=insertNode(head,val);
				break;
			case 2:
				printf("\n pre OrderTraversal:");
				preorderTraversal(head);
				printf("\n");
				break;
			case 3:
				printf("\n Post OrderTraversal:");
				postorderTraversal(head);
				break;
			case 4:
				break;
			default:
				printf("\n invalid:");
		}
	}while(ch!=4);
	return 0;
}
//fun call
node *createNode(int val)
{
	node *newNode=(node *)malloc(sizeof(node));
	newNode->data=val;
	newNode->left=newNode->right=NULL;
	return newNode;
}
node *insertNode(node *head,int val)
{
	if(head==NULL)
	{
		return createNode(val);
	}
	if(val<head->data)
	{
		head->left=insertNode(head->left,val);
	}
	else if(val>head->data)
	{
		head->right=insertNode(head->right,val);
	}
	return head;
	
}
void preorderTraversal(node *head)
{
	if(head!=NULL)
	{
	printf("%d\t",head->data);
	preorderTraversal(head->left);
	preorderTraversal(head->right);
	}
	
}

void postorderTraversal(node *head)
{
	if(head!=NULL)
	{

	postorderTraversal(head->left);
	postorderTraversal(head->right);
	printf("%d\t",head->data);
	}
	
}
