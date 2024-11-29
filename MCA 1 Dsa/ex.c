//dynami
#include<stdio.h>
#include<stdlib.h>

// typedef struct queue
// {
//     int data;
//     struct queue *next;
// }node;

// node *rear=NULL;
// node *front=NULL;
// void init()
// {
//     rear=NULL;
//     front=NULL;
// }
// void push(int val);
// int pop();
// void display();
// int isempty();

// void push(int val)
// {
// 	node *p;
//     p=(node *)malloc(sizeof(node));
//     p->data=val;
//     p->next=NULL;
//     if(front==NULL)
//     {
//         front=p;
//         rear=p;
//     }
//     else
//     {
//         rear->next=p;
//         rear=p;
//     }
// }
// int isempty()
// {
//     return front==NULL;
// }

// void display()
// {
//     node *p=front;
// 	printf("queue connected:");
// 	while(p!=NULL)
// 	{
// 		printf("%d\t",p->data);
// 		p=p->next;
// 	}
	
// }

// int pop()
// {
//     node *q;
//     int val;
//     if(front==NULL)
//     {
//         printf("\n invalid:");
//     }
//     else
//     {
//         q=front;
//         front=front->next;
//         val=q->data;
//         free(q);

//     }return val;
// }

// int main()
// {
//     int i,ch,val,pos;
//     init();
//     do
//     {
//         printf("\n1 push:");
// 		printf("\n2 pop:");
// 		printf("\n3 isempty:");
// 		printf("\n4 Display:");
// 		printf("\n5 Exit:");
// 		printf("\n enter choice:");
// 		scanf("%d",&ch);
// 		switch(ch)
//         {
//             case 1:
//                 //push
//                 printf("\n Enter value:");
//                 scanf("%d",&val);
//                 push(val);
//                 break;
//             case 2:
//                 //
//                 val=pop();
//                 if(pos!=-1)
//                 {
//                     printf("\n poped value is:%d",val);
//                 }
//                 break;
//             case 3:
// 				if (isempty()) {
//                     printf("Queue is empty.\n");
//                 } else {
//                     printf("Queue is not empty.\n");
//                 }
//                 break;
//             case 4:
//                 //display
//                 display();
//                 break;
//             case 5:
//                 break;
//             default:
//                 printf("\n invalid ");

//         }
//     } while (ch!=5);
//     return 0;
    
// }

// static
#define N 10
struct queue
{
    int data[N];
    int front,rear;
};

void init(struct queue *q)
{
    q->rear=-1;
    q->front=-1;
}

int isFull(struct queue*q);
int isempty(struct queue*q);
int insert(struct queue *q,int val);
int delete(struct queue *q);
void display(struct queue *q);

int isFull(struct queue*q)
{
    return q->rear==N-1;
}
int isempty(struct queue*q)
{
    return q->rear==q->front;
}

int insert(struct queue *q,int val)
{
    if(isFull(q))
    {
        printf("\n queue is full");
    }
    else
    {
        q->rear++;
        q->data[q->rear]=val;
    }
}
int delete(struct queue *q)
{
    if(isempty(q))
    {
        printf("\n queueu is emtpy:");
    }
    else
    {
        q->front++;
        return (q->data[q->front]);
    }
}

void display(struct queue *q)
{
    if(isFull(q))
    {
        printf("\n queue is empty:");
    }
    else
    {
        int i;
        printf("\n Elements are:");
        for(i=q->front+1;i<=q->rear;i++)
        {
            printf("%d\t",q->data[i]);

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
                //delete
                val=delete(&q);
                if(val!=-1)
                {
                    printf("\n delete value is%d:",val);
                }
                break;
            case 3:
                display(&q);
                break;
            case 4:
                break;
            default:
                printf("\n invalid");
        }     
    } while (ch!=4);
    return 0;
    
}