//! Time Complexity

//? Best Case: O(n^2)
//? Average Case: O(n^2)
//? Worst Case: O(n^2)

//! Definition

//* Selection Sort is a simple sorting algorithm that repeatedly selects the minimum (or maximum) element from an unsorted portion of the array and places it at the beginning (or end) of the sorted portion. This process is repeated until the entire array is sorted.

//!Code

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

    //! Selection Sort

    for(int i = 0; i<size-1; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp; 
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
