// static linklist
// Write a menu driven C program to perform following operations on a Singly  
//Linked List. create(), insert(),display()

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *createlink(int n);
node *insertval(node *head,int val,int pos);
node *deletelink(node *head,int pos);
void displaylink(node *head);


int main()
{
    node *head=NULL;
    int i,n,ch,val,pos;
    do
    {
       printf("\n1 create:");
       printf("\n2 insert:");
       printf("\n3 delete:");
       printf("\n4 display:");
       printf("\n5 Exit:");
       printf("\n Enter your choice:");
       scanf("%d",&ch);
       switch(ch)
       {
        case 1:
            //crate
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
            head=insertval(head,val,pos);
            break;
        case 3:
            //delete
            printf("\n Enter position to delte it:");
            scanf("%d",&pos);
            head=deletelink(head,pos);
            break;
        case 4:
            displaylink(head);
            break;
        case 5:
            break;
        default:
            printf("\n invalid:");
       }
    } while (ch!=5);
    return 0;
    
}

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
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            p=head;
            while(p->next!=NULL)
                p=p->next;
            p->next=temp;
        }
    }return head;
}

node *insertval(node *head,int val,int pos)
{
    node *p,*q;
    int i;
    q=(node *)malloc(sizeof(node));
    q->data=val;
    q->next=NULL;
    if(pos==1)
    {
        q->next=head;
        head=q;
    }
    else{
        p=head;
        for(i=1;i<pos-1 && p!=NULL;i++)
            p=p->next;
        if(p==NULL)
            printf("\n avoid this");
        else
        
            q->next=p->next;
            p->next=q;
        
    }return head;
}

void displaylink(node *head)
{
    node *p=head;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}

node *deletelink(node *head,int pos)
{
    node *p,*q;
    int i;
    if(pos==1)
    {
        q=head;
        head=head->next;
        free(q);
    }
    else
    {
        p=head;
        for(i=1;i<pos-1 && p!=NULL ;i++)
            p=p->next;
        if(p==NULL)
            printf("\n Avoid this:");
        else
        {
            q=p->next;
            p->next=q->next;
            free(q);
        }
    }return head;
}