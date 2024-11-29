// static and Dynamic stack
// static stack
#include<stdio.h>
#include<stdlib.h>
//
struct stack
{
	int data[10];
	int top;
};

void push(struct stack *s,int val);
int pop(struct stack *s);
int peek(struct stack *s);
void display(struct stack *s);


int main()
{
	struct stack s1;
	s1.top=-1;
	int ch,val;
	do
	{
		printf("\n1 push:");
		printf("\n2 pop:");
		printf("\n3 peek:");
		printf("\n4 Display:");
		printf("\n Exit:");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(s1.top==9)
					printf("\n stack is full..");
				else
					{
						printf("\n Enter value to push it:");
						scanf("%d",&val);
						push(&s1,val);
					}
					break;
			case 2:
				if(s1.top==-1)
					printf("\n stack is empty:");
				else
				{
					val=pop(&s1);
					printf("\n poped value is%d",val);
				}
				break;
			case 3:
				if(s1.top==-1)
					printf("\n stack is empty:");
				else
				{
					val=peek(&s1);
					printf("\n peeked value is%d",val);
				}
				break;
			case 4:
				display(&s1);
				break;
			case 5:
				break;
			default:
				printf("\n invalid creaditation:");
		}
	}while(ch!=5);
	return 0;
}

//function call
void push(struct stack *s,int val)
{
	s->top++;
	s->data[s->top]=val;
}
int pop(struct stack *s)
{
	return(s->data[s->top--]);
}
int peek(struct stack *s)
{
	return(s->data[s->top]);
}
void display(struct stack *s)
{
	int i;
	for(i=s->top;i!=-1;i--)
	{
		printf("%d\t",s->data[i]);
	}
}


//Dynamic stack
// typedef struct stack
// {
// 	int data;
// 	struct list*next;
// }node;

// node *top;
// void init()
// {
// 	top==NULL;
// }
// //fun decleartion
// void push(int val);
// int pop();
// int peek();

// int main()
// {
// 	int ch,val;
// 	init();
// 	do
// 	{
// 		printf("\n1 push:");
// 		printf("\n2 pop:");
// 		printf("\n3 peek:");
// 		printf("\n Enter choice:");
// 		scanf("%d",&ch);
// 		switch(ch)
// 		{
// 			case 1:
// 				printf("\n enter value to push it:");
// 				scanf("%d",&val);
// 				push(val);
// 				break;
// 			case 2:
// 				val=pop();
// 				printf("\n poped value is:%d",val);
// 				break;
// 			case 3:
// 				val=peek();
// 				printf("\n peeked value is%d",val);
// 				break;
// 			default:
// 				printf("\n Invalid Crediations:");
// 		}
// 	}while(ch!=3);
// 	return 0;
// }

// //function call

// void push(int val)
// {
// 	node *p;
// 	p=(node *)malloc(sizeof(node));
// 	p->data=val;
// 	p->next=NULL;
// 	if(top==NULL)
// 	{
// 		top=p;
// 	}
// 	else
// 	{
// 		p->next=top;
// 		top=p;
// 	}
// }

// int pop()
// {
// 	node *q;
// 	int val;
// 	if(top==NULL)
// 	{
// 		printf("\n Dynamic stack is Empty:");
// 	}
// 	else
// 	{
// 		q=top;
// 		val=q->data;
// 		top=top->next;
// 	}
// 	return val;
// }

// int peek()
// {
// 	int val;
// 	if(top==NULL)
// 	{
// 		printf("\n Dynamic stack is empty:");
// 	}
// 	else
// 	{
// 		val=top->data;
// 	}
// 	return val;
// }

