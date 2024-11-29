//stack
#include<stdio.h>
#include<stdlib.h>
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
void push(struct stack *s1,int val);
int pop(struct stack *s1);
int peek(struct stack *s1);
void display(struct stack *s1);

//fun call

void push(struct stack *s1,int val)
{
    if(s1->top==N-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        s1->top++;
        s1->data[s1->top]=val;
    }
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
                printf("\nEnter value to push : ");
                scanf("%d",&val);
                push(&s1,val);
                break;
            case 2:
            //pop
                val=pop(&s1);
                if(val!=-1)
                {
                    printf("Poped value is:%d",val);
                }
                break;
            case 3:
            //peek
                val=peek(&s1);
                if(val!=-1)
                {
                    printf("peek value is:%d",val);
                }
            case 4:
            //displa
                display(&s1);
                break;
            case 5:
                break;
            default:
            printf("Invalid choice");

        }
    }while(ch!=5);
    return 0;
}
