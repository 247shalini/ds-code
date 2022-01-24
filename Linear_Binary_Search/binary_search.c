// program for binary Search

#include <stdio.h>

int binarySearch(int arr[], int size, int element){
    int low, mid, high ;
    low = 0 ; 
    high = size-1;
    
    //code for searching the element
    while (low<=high)
    {
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {12,23,24,26,40,45};
    int size = sizeof(arr)/sizeof(int);
    int element = 45;
    int searchIndex = binarySearch(arr, size, element);
    printf("%d\n" , searchIndex);
    printf("The element %d was found at index %d", element,searchIndex);
    return 0;
}
