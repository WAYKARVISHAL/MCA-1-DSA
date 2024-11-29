//Q.2 Write a C program to implement Dynamic implementation of Queue of integers with following 
//Initialize(), push (), pop (), isempty (), display ()

 
#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
	int data;
	struct queue *next;
}node;

node *front =NULL;
node *rear=NULL;
void init()
{
	front=NULL;
	rear=NULL;
}

//fun decleartion
void push(int value);
int pop();
int isempty();
void display();

void push(int val)
{
	node *new;
    new=(node*)malloc(sizeof(node));
    new->data=val;
    new->next=NULL;
    if(front==NULL)
    {
        front=new;
        rear=new;
    }
    else
    {
        rear->next=new;
        rear=new;
    }
}

int pop()
{
	int val;
	node *q;
	if(front==NULL)
	{
		printf("queue is empty.");
	}
	else
	{
		q=front;
		front=front->next;
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
	if(isempty())
	{
		printf("Queue is empty:\n");
		return;
	}
	node *p=front;
	printf("queue connected:");
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
	
}
int main()
{
	init();
	int ch,val;
	do
	{
		printf("--------Queue Operartion------------");
		printf("\n1 push:");
		printf("\n2 pop:");
		printf("\n3 isempty:");
		printf("\n4 Display:");
		printf("\n5 Exit:");
		printf("\n enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter value to push it:");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				val=pop();
				if(val!=-1)
				{
					printf("poped value is: %d",val);
				}
				break;
			case 3:
				if (isempty()) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue is not empty.\n");
                }
                break;
            case 4:
            	display();
            	break;
            case 5:
            	break;
            default:
            	printf("\n invalid :");
		}
	}while(ch!=5);
	return 0;
}
