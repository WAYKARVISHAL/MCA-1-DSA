//.2 Write a menu driven C program to perform following operations on a Circular Singly linked list. 
//create(), insert(),display(

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
}node;

//fun dec
node *create();
void display(node *first);
node *insert(node *first,int val,int pos);

node *create()
{
	
}


int main()
{
	int ch,val,pos;
	node *first;
	do
	{
		printf("1.create linked list.\n");
		printf("2.display linked list.\n");
		printf("3.insert value at given position.\n");
//		printf("4.delete value at given position.\n");
		
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				first=create();
				break;
			case 2:
				display(first);
				break;
			case 3:
				printf("\n enter value:");
				scanf("%d",&val);
				printf("\n Enter postiion");
				scanf("%d",&pos);
				first=insert(first,val,pos);
			default:
				printf("Invalid choice.");
		}
	}while(ch!=3);
	return 0;
}
