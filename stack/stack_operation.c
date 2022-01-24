#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int* arr;
};

// check stack is full
int isFull(struct stack *s){
    if(s->top == s->size-1){
        printf("stack is full\n");
        return 1;
    }else{
        printf("stack is not full\n");
        return 0;
    }
}

// check stack is empty
int isEmpty(struct stack *s){
    if(s->top == -1){
        printf("stack is Empty\n");
        return 1;
    }else{
        printf("stack is not Empty\n");
        return 0;
    }
}

// push operation
int push(struct stack *s, int val){
    if(s->top == s->size-1){
        printf("Stack Overflow ! Cannot push %d to  the stack\n",val);
    }
    else{
        s->top++;
        s->arr[s->top] = val;
    }
}

// pop operation
int pop(struct stack *s){
    if(s->top == -1){
        printf("Stack Underflow ! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = s->arr[s->top];
        s->top--;
        return val;
    }
}

int main(){
    struct stack s;
    s.size = 50;
    s.top = -1;
    s.arr = (int*)malloc(s.size * sizeof(int));
    printf("Before pushing element :\n");
    isEmpty(&s);
    isFull(&s);

    // push the value in stack
    push(&s,56);
    push(&s,18);
    push(&s,19);
    push(&s,9);
    push(&s,10);
    push(&s,1);
    push(&s,55);
    printf("After pushing element :\n");
    isEmpty(&s);
    isFull(&s);

    // pop the value in stack
    int val = pop(&s);
    printf("Popped %d from the stack\n", val);
    return 0;
}