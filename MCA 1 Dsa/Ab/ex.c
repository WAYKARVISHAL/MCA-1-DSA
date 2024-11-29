///static stack
#include<stdio.h>
#include<stdlib.h>

//typedef struct stack 
//{
//	int data[10];
//	int top;
//}stack ;
//
//void push(struct stack *s,int val);
//int pop(struct stack *s);
//int peek(struct stack *s);
//void display(struct stack *s);
//
//
//
//int main()
//{
//	stack s1;
//	s1.top=-1;
//	int ch,val;
//	do
//	{
//		printf("\n1 push:");
//		printf("\n2 pop:");
//		printf("\n3 peek:");
//		printf("\n4 display:");
//		printf("\n5 exit:");
//		printf("\n Enter choic:");
//		scanf("%d",&ch);
//		switch(ch)
//		{
//			case 1:
//				//push
//				if(s1.top==9)
//				{
//					printf("\n Stack is full:");
//				}
//				else
//				{
//					printf("\n Enter value:");
//					scanf("%d",&val);
//					push(&s1,val);
//				}break;
//			case 2:
//				//pop
//				if(s1.top==-1)
//				{
//					printf("\n Stack is empty");
//				}
//				else
//				{
//					val=pop(&s1);
//					printf("poped value is:%d",val);
//				}
//				break;
//			case 3:
//				//peek
//				if(s1.top==-1)
//				{
//					printf("\n stack is emtpy:");
//				}
//				else
//				{
//					val=peek(&s1);
//					printf("peek value is:%d",val);
//				}
//				break;
//			case 4:
//				display(&s1);
//				break;
//			case 5:
//				break;
//			default:
//				printf("\n invalid:");
//		}
//	}while(ch!=4);
//	return 0;
//}
//void push(struct stack *s,int val)
//{
//	s->top++;
//	s->data[s->top]=val;
//}
//int pop(struct stack *s)
//{
//	return(s->data[s->top--]);
//}
//int peek(struct stack *s)
//{
//	return(s->data[s->top]);
//}
//
//void display(struct stack *s)
//{
//	int i;
//	for(i=s->top;i!=-1;i--)
//	{
//		printf("%d\t",s->data[i]);
//	}
//}

typedef struct stack
{
	int data;
	struct stack *next;
}node;

node *top;
void init()
{
	top=NULL;
}
//dec
void push(int val);
int pop();
int peek();



//cal
void push(int val)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	p->data=val;
	p->next=NULL;
	if(top==NULL)
	{
		top=p;
		
	}
	else
	{
		p->next=top;
		top=p;
	}
}
int pop()
{
	node *q;
	int val;
	if(top==NULL)
	{
		printf("\n dynamic stack is emtpy:");
	}
	else
	{
		q=top;
		val=q->data;
		free(q);
	}
	return val;
}

int peek()
{
	int val;
	if(top==NULL)
	{
		printf("\n empty");
	}
	else
	{
		val=top->data;
	}
	return val;
}

int main()
{
	int ch,val;
	init();
	do
	{
		printf("\n1 push:");
		printf("\n2 pop:");
		printf("\n3 peek:");
		printf("\n4 exit:");
		printf("\n Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter valE:");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				val=pop();
				printf("poped value is:%d",val);
				break;
			case 3:
				val=peek();
				printf("peek value is %d",val);
				break;
			case 4:
				break;
			default:
				printf("\n invalid:");
		}
	}while(ch!=4);
	return 0;
}

