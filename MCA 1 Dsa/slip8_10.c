//.2 Write a C program to implement static stack. (init(), push(), display(), isfull()) ,. (init(), pop(), display(), isempty()
#include<stdio.h>
#define N 10
struct stack
{
	int data[N];
	int top;
};
void init(struct stack *s1)
{
	s1->top=-1;
}
//fun def
void push(struct stack *s,int val);
int pop(struct stack *s);
int peek(struct stack *s);
void display(struct stack *s);
//call
void push(struct stack *s1,int val)
{
	if(s1->top==N-1)
	{
	printf("\n stack is Full");
	}
	s1->top++;
	s1->data[s1->top]=val;
}

int pop(struct stack *s1)
{
	if(s1->top==-1)
		{
		printf("\n Stack is emtpy:");
		return -1;
		}
	return(s1->data[s1->top--]);
}

int peek(struct stack *s1)
{
	if(s1->top==-1)
		{
			printf("\n Stack is emtpy:");
			return -1;
		}
	return(s1->data[s1->top]);
}
void display(struct stack *s1)
{
	int i;
	if(s1->top==-1)
	{
		printf("\n stack is empty:");
		return;
	}
	printf("\n stack elements:\n");
	for(i=0;i<=s1->top;i++)
	{
		printf("%d\t",s1->data[i]);
	}
	
} 
int main()
{
	struct stack s1;
	int ch,val;
	init(&s1);
	do
	{
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.peek");
		printf("\n4 display:");
		printf("\n5 Exit:");
		printf("\nEnter Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				//push
					printf("\n Enter value push it:");
					scanf("%d",&val);
					push(&s1,val);		
				break;
			case 2:
				//pop
					val=pop(&s1);
					if (val != -1)
						printf("\nPopped value: %d", val);
					break;
					
				break;
			case 3:
				//peek
					val=peek(&s1);
					if (val != -1)
					{
						printf("peek value is %d",val);
					}
					break;
					
				break;
			case 4:
				display(&s1);
				break;
			case 5:
				break;
			default:
				printf("invalid");
		}	
	}while(ch!=5);
	return 0;
}

