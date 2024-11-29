#include <stdio.h>
#define max 100

struct stack {
    int data[max];
    int top;
};

void push(struct stack *s, int n) {
    s->data[++s->top] = n;
}

int pop(struct stack *s) {
    return s->data[s->top--];
}

int isEmpty(struct stack *s) {
    return s->top != -1;
}

int main() {
    struct stack s;
    s.top = -1;
    int n = 12345;
    int i;

    // Push digits onto the stack
    while (n != 0) {
        i = n % 10;
        push(&s, i);
        n = n / 10;
    }

    int n1 = pop(&s);

    // Pop digits and construct the reversed number
    int p=1;
    while (isEmpty(&s)) {
        n1 = n1 + pop(&s)*p;  // 0+1*1=1  1+2*10=21  21+3*100=321  
        p=p*10;
    }

    printf("Reversed number: %d\n", n1);
    return 0;
}
