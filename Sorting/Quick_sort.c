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

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;

    do{
        while (arr[i]<=pivot)
        {
            i++;
        }    
        while (arr[j]>pivot)
        {
            j--;
        }
        
        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while (i<j);

    // swap arr[low] and arr[j]
    temp = arr[low];
    arr[low] = arr[j]; 
    arr[j] = temp;    
    return j;
}

// Quick sort array 
void quickSort(int arr[],int low, int high){
    int partitionIndex; //index of pivot after partition
    int pivot = low;

    if(low<high){
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex-1); //sort left subarray
        quickSort(arr, partitionIndex+1, high); //sort right subarray
    }
}

int main(){
    int arr[] = {1,25,3,89,9,6,22};
    int n = sizeof(arr)/sizeof(int);
    display(arr,n);
    quickSort(arr,0,n-1);
    display(arr,n);
    return 0;
}