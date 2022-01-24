#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};

// check Queue is full
int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }else{
        return 0;
    }
}

// check Queue is Empty
int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }else{
        return 0;
    }
}

 // enqueue elements in queue
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("Queue is full");
    }else{
        q->r++;
        q->arr[q->r] = val;
    }
}

// Dequeue elements in queue
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("Queue is Empty");
    }else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct queue q;
    q.size = 100;
    q.f = -1;
    q.r = -1;
    q.arr = (int*)malloc(q.size * sizeof(int));

    // enqueue elements
    enqueue(&q,12);
    enqueue(&q,10);
    enqueue(&q,92);
    enqueue(&q,56);

    // Dequeue elements
    printf("Dequeue element: %d\n", dequeue(&q));

    if (isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }

    if (isFull(&q))
    {
        printf("Queue is Full\n");
    }
    return 0;
}