//Q.2 Write a C program to implement dynamic stack. 
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

node *top;
void init()
{
    top=NULL;
}


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
    int val;
    node *q;
    if(top==NULL)
    {
        printf("\n stack is emtpy:");
    }
    else
    {
        q=top;
        top=top->next;
        val=q->data;
        free(q);
  }return val;
}

int peek()
{

    if(top==NULL)
    {
        printf("\n stackis emtpy:");
    }
    else
    {
        return top->data;
    }
}
int isempty(){
    return top==NULL;
}
void display()
{
    if(isempty())
    {
        printf("stack is empty:");
    }
    node *p=top;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}
int main()
{
    int i,n,ch,val;
    init();
    do
    {
        printf("\n1 push:");
        printf("\n2 pop:");
        printf("\n3 peek:");
        printf("\n4 display:");
        printf("\n5 isemtpy: ");
        printf("\n6 exit:");
        printf("\n Enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n Enter value:");
            scanf("%d",&val);
            push(val);
            break;
            
            case 2:
                val=pop();
                printf("\n poped value is:%d",val);
                break;
            case 3:
                val=peek();
                printf("\n peeked value si%d",val);
                break;
            case 4:
                display();
                break;
            case 5:
                if(isempty())
                {
                    printf("queue is empty:");
                }
                else{
                    printf("queue is not emtpy ");
                }
                break;
            default:
                printf("\n invalid:");

        }
    }while(ch!=4);
    return 0;
}