
//! Time Complexity

//? Best Case: O(1)
//? Average Case: O(n)
//? Worst Case: O(n)

//! Definition

//* Linear search is a simple search algorithm that sequentially checks each element in a list or array until a match is found or the entire list is traversed.

//! Algorithm

//* Start from the beginning of the array.
//* For each item in the array, compare it with the target value.
//* If the current item matches the target value, return the index of the item.
//* If the entire array has been searched and no match is found, return a "not found" indication.

//! PseudoCode

//* function linear_search(array , size , target):
//*     for each item in array:
//*         if item == target:
//*             return index of item
//*     return not found


//! Code

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at Position : " << i << endl;
            return 0;
        }
    }

    cout << "Element not found";
}

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

    int key;
    cout << "Enter a Key Element to be found : ";
    cin >> key;

    linearSearch(arr, size, key);

    return 0;
}

