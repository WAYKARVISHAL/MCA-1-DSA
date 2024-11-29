// Q.2  Write a C program to reverse a given string using stack. 
#include<stdio.h>
#define N 10

struct stack 
{
    int data[N];
    int top;
};

void push(struct stack *s,char c)
{
    s->top++;
    s->data[s->top]=c;
}

int pop(struct stack *s)
{
    return(s->data[s->top--]);
}
int main()
{
    int i;
    struct stack s;
    s.top=-1;
    char str[]="taki";
    for(i=0;i<str[i]!='\0';i++)
    {
        push(&s,str[i]);
    }
    for(i=0;i<str[i]!='\0';i++)
    {
        printf("%c",pop(&s));
    }
    return 0;

}