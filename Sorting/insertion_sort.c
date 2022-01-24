#include<stdio.h>

// print the array
void display(int arr[], int n){
    // Code for Traversal
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// insertion sort array 
void insertionSort(int arr[],int n){
    int key, j; 

    printf("Running insertion Sort...\n");
    for (int i = 1; i <= n-1; i++)
    {
        key = arr[i];
        j = i-1;

        while (j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {1,25,6,21,93,89,9};
    int n = sizeof(arr)/sizeof(int);
    display(arr,n);
    insertionSort(arr,n);
    display(arr,n);
}