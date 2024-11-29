#define max 100
#include<stdio.h>
struct stack 
{
 char data[max];
 int top;
};
void push(struct stack *s,char c){
    s->data[++s->top]=c;
}
 pop(struct stack *s)
{
    return s->data[s->top--];
}
int main()
{
    struct stack s;
    s.top=-1;
    char str[]="Ajinkya";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        push(&s,str[i]);
    }
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",pop(&s));
    }
    return 0;
}