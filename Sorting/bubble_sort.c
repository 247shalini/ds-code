#include<stdio.h>

// print the array
void display(int arr[], int n){
    // Code for Traversal
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// sort the array 
void bubbleSort(int arr[],int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
}

int main(){
    int arr[] = {1,25,3,89,9,6,22};
    int n = sizeof(arr)/sizeof(int);
    display(arr,n);
    bubbleSort(arr,n);
    display(arr,n);
}