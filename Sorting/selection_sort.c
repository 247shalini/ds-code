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

// selection sort array 
void selectionSort(int arr[],int n){
    int temp, indexOfMin; 

    printf("Running Selection Sort...\n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }

        }
        // swap arr[i] and arr[indexOfMin]
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

int main(){
    int arr[] = {1,25,3,89,9,6,22};
    int n = sizeof(arr)/sizeof(int);
    display(arr,n);
    selectionSort(arr,n);
    display(arr,n);
}