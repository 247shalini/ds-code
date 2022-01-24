// program for insertion in array

#include <stdio.h>

void display(int arr[], int n){
    // Code for Traversal
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int size, int element, int capacity, int index){

    // Code for Insertion
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[50] = {26,19,22,25};
    int size = 4, element = 35, index=2;
    display(arr,size);
    insert(arr, size, element, 50, index);
    size += 1;
    display(arr,size);
    return 0;
}