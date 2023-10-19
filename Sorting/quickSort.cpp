
//? Best Case Time Complexity: O(n log n)
//? Average Case Time Complexity: O(n log n)
//? Worst Case Time Complexity: O(n^2)

//! Quick Sort is a fast and efficient sorting algorithm that uses a divide-and-conquer approach by selecting a pivot element and partitioning the array into two subarrays.

#include <iostream>
using namespace std;

void swap(int arr[], int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l , int r){

    int pivot = arr[r];
    int i = l-1;

    for(int j = l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i, j);

        }
    }
    swap(arr, i+1, r);
    return i+1;
}



void quickSort(int arr[], int l, int r){
    if(l<r){

        int pi = partition(arr, l , r);

        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}

int main(){

    int size; 
    cout<<"Enter Size of Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter Elements of Array : ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    quickSort(arr, 0, size-1);

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}