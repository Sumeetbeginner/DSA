
//! Time Complexity

//? Best Case: O(n)
//? Average Case: O(n^2)
//? Worst Case: O(n^2)

//! Definition

//* Bubble Sort is a simple sorting algorithm that repeatedly steps through the list of elements to be sorted, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated for each element until the entire list is sorted.

//! Code

#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];

    cout << "Enter Elements of Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    //! Bubble Sort

    int counter = 1;

    while(counter<size){
        for(int i = 0; i<size-counter; i++){
            if(arr[i+1]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }

        counter++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
