#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void listTraversal(struct Node *ptr){
    while (ptr!=NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // allocate memory for Nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    // first Node 
    head -> data = 25;
    head -> next = second;

    // second Node 
    second -> data = 22;
    second -> next = third;

    //third Node 
    third -> data = 12;
    third -> next = NULL;

    listTraversal(head);
    return 0;
}

