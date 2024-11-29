// Q.2 Write a C program to implement a doubly linked list with Create, Insert and Display operatio

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev,*next;
}node;

node *createlink(int n);
node *insertlink(node *head,int val,int pos);
void display(node *head);

//decl
node *createlink(int n)
{
    int i;
    node *head=NULL;
    node *temp=NULL;
    node *p=NULL;
    printf("\n Enter values:");
    for(i=0;i<n;i++)
    {
        temp=(node *)malloc(sizeof(node));
        scanf("%d",&(temp->data));
        temp->prev=NULL;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            p=temp;
        }
        else
        {
            p->next=temp;
            temp->prev=p;
            p=temp;
        }
    }return head;
}
node *insertlink(node *head,int val,int pos)
{
    node *p,*q;
    int i;
    q=(node *)malloc(sizeof(node));
    q->data=val;
    q->prev=NULL;
    q->next=NULL;
    if(pos==1)
    {
        head->prev=q;
        q->next=head;
        head=q;
    }
    else
    {
        p=head;
        for(i=1;i<pos-1 && p!=NULL;i++)
            p=p->next;
        if(p==NULL)
            printf("\n invalid");
        else
        {
            q->next=p->next;
            p->next=q;
            q->prev=p;
            q->prev->next=q;
        }
    }
    return head;
}

void display(node *head)
{
    node *p=head;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    } 
}

int main()
{
    int i,n,ch,val,pos;
    node *head=NULL;
    do
    {
        printf("\n1 create:");
        printf("\n2 insert:");
        printf("\n3 display:");
        printf("\n4 Exit:");
        printf("\n Enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                //careate
                printf("\n Enter size:");
                scanf("%d",&n);
                head=createlink(n);
                break;
            case 2:
            //insert
                printf("\n Enter value:");
                scanf("%d",&val);
                printf("\n Enter position:");
                scanf("%d",&pos);
                head=insertlink(head,val,pos);
                break;
            case 3:
                //display
                display(head);
                break;
            case 4:
                break;
            default:
                printf("\n Invalid crediations:");
        }
    }while(ch!=4);
    return 0;
}

