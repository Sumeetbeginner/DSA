
//? Best Case :  O(n)
//? Average Case :  O(n^2)
//? Worst Case :  O(n^2)

//! Insertion Sort is a simple sorting algorithm that iterates through an array, repeatedly moving elements to their correct positions within a growing sorted subarray.

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

    //! Insertion Sort

    for (int i = 1; i < size; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] > curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}