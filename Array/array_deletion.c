// program for Deletion in array

#include <stdio.h>

void display(int arr[], int n){
    // Code for Traversal
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int delete(int arr[], int size, int index){
    // Code for Deletion
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main(){
    int arr[50] = {26,19,22,25};
    int size = 4, index=2;
    display(arr,size);
    delete(arr, size, index);
    size -= 1;
    display(arr,size);
    return 0;
}