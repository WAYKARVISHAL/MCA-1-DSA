//write a program to implement static queue(init,insert,display,delete,isfull,isempty)
#include<stdio.h>
#define N 10
struct queue
{
	int item[N];
	int rear,front;
};

void init(struct queue *q)
{
	q->rear=-1;
	q->front=-1;
}
//decl
int isFull(struct queue*q);
int isempty(struct queue*q);
void insert(struct queue *q,int val);
int deleteval(struct queue *q);
void display(struct queue *q);
//call
int isFull(struct queue*q)
{
	return q->rear==N-1;
}

int isempty(struct queue *q)
{
	return q->rear==q->front;
}

void insert(struct queue *q,int val)
{
	if(isFull(q))
	{
		printf("\n queue is full");
		return;
	}
	else
	{
		q->rear++;
		q->item[q->rear]=val;
		
	}
}
int deleteval(struct queue *q)
{
	if(isempty(q))
	{
		printf("\n queue is empty:");
		return -1;
	}
	else
	{
		q->front++;
		return q->item[q->front];
	}
}
void display(struct queue *q)
{
	int i;
	if(isempty(q))
	{
		printf("\n queue is empty:");
	}
	else
	{
		printf("\n Queue elements:");
		for(i=q->front+1;i<=q->rear;i++)
		{
			printf("%d\t",q->item[i]);
		}
	}
}

int main()
{
	int ch,val;
	struct queue q;
	init(&q);
	do
	{
		printf("\n1 insert:");
		printf("\n2 delete:");
		printf("\n3 display:");
		printf("\n4 Exit:");
		printf("\n Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter value:");
				scanf("%d",&val);
				insert(&q,val);
				break;
			case 2:
				val=deleteval(&q);
				printf("\n Deleted value is:%d",val);
				break;
			case 3:
				display(&q);
				break;
			case 4:
				break;
			default:
				printf("invalid:");
				
		}
	}while(ch!=4);
	return 0;
}
