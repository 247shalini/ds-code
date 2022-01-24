// program for linear Search

#include <stdio.h>

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element){
            return i;
        };
    }
    return -1;
}

int main(){
    int arr[] = {14,26,25,11,17,19,85};
    int size = sizeof(arr)/sizeof(int);
    int element = 85;
    int searchIndex = linearSearch(arr, size, element);
    printf("The element %d was found at index %d", element,searchIndex);
}
