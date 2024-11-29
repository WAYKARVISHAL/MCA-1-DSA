//Q.2 Write a C program to implement Dynamic implementation of Queue of integers with following 
//operation. 
//[12 Marks] 
//Initialize(), push (), pop (), isempty (), display () 

#include<stdio.h>
#include<stdlib.h>

typedef struct queue
{
	int data;
	struct queue *next;
}node;
node *front;
node *rear;

void init()
{
	front=NULL;
	rear=NULL;
}
//decleartion
void push(int val);
int pop();
int isempty();
void display();

//call
void push(int val)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	p->data=val;
	p->next=NULL;
	if(front==NULL)
	{
		front=p;
		rear=p;
	}
	else
	{
		rear->next=p;
		rear=p;
	}
}

int pop()
{
	node *q;
	int val;
	if(front==NULL)
	{
		printf("\n Queue is emtpy:");
	}	
	else
	{
		q=front;
		front =front->next;
		val=q->data;
		free(q);
		
	}
	return val;
}
int isempty()
{
	return front==NULL;
}
void display()
{
	node *p=front;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
}

int main()
{
	int ch,val;
	init();
	do
	{
		printf("\n1 push");
		printf("\n2 pop:");
		printf("\n3 isempty:");
		printf("\n4 display:");
		printf("\n5 Exit:");
		printf("\n Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				//push
				printf("\n Enter value:");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				//pop
				val=pop();
				printf("Poped value is:%d",val);
				break;
			case 3:
				if(!isempty())
				{
					printf("Queue is Not empty:");
				}
				else
				{
					printf("Queue is  Empty:");
				}
				break;
			case 4:
				//display
				display();
				break;
			case 5:
				break;
			default:
				printf("Invalid Crediations:");
		}
	}while(ch!=5);
	return 0;
}
