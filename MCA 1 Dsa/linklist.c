#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;
//fun dec
node *createlinklist(int n);
void display(node *head);
node *insert(node *head,int val,int pos);

//fun call
node *createlinklist(int n)
{
	node *head=NULL;
	node *temp=NULL;
	node *p=NULL;
	int i;
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
void display(node *head)
{
	int i;
	node *p=head;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
}
node *insert(node *head,int val,int pos)
{
	int i;
	node *p,*q;
	q=(node*)malloc(sizeof(node));
	q->data=val;
	q->next=NULL;
	
	if(pos==1)
	{
		q->next=head;
		head=q;
	}
	else
	{
		p=head;
		for(i=1;i<pos-1 && p!=NULL;i++)
			p=p->next;
		if(p==NULL)
			printf("\n position out of bound");
		else
		{
			q->next=p->next;
			p->next=q;
		}
	}
	return head;
}
int main()
{
	node *head=NULL;
	int i,n,ch,val,pos;
	do
	{
		printf("\n1 create");
		printf("\n2 display:");
		printf("\n3 insert");
		printf("\n4 exit");
		printf("\n Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter size of linklist:");
				scanf("%d",&n);
				head=createlinklist(n);
				break;
			case 2:
				display(head);
				break;
			case 3:
				printf("\n Enter value:");
				scanf("%d",&val);
				printf("\n Enter position:");
				scanf("%d",&pos);
				head=insert(head,val,pos);
				break;
			case 4:
				break;
			default:
				printf("\n Invalid Crediations:");
		}
	}while(ch!=4);
	return 0;
}
