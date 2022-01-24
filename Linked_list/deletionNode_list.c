#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// traversal the linked list 
void listTraversal(struct Node *ptr){
    while (ptr!=NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// deleting the nodes at a given index 
struct Node * deleteAtIndex(struct Node *head , int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
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

    head = deleteAtIndex(head,2);
    printf("List after deletion\n");

    listTraversal(head);
    return 0;
}

