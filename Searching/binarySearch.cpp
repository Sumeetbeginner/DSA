
//? To apply Binary Search, THE DATA MUST BE SORTED

//! Time Complexity

//? Best Case: O(1)
//? Average Case: O(log n)
//? Worst Case: O(log n)

//! Definition

//* Binary search is an efficient algorithm for finding a specific target element within a sorted array by repeatedly dividing the search interval in half until the target is found or the search interval becomes empty.

//! Algorithm

//* Given a sorted array arr and a target value target.
//* Initialize two pointers, left and right, where left points to the beginning of the array and right points to the end of the array.
//* Enter a loop while left is less than or equal to right:
//* a. Calculate the middle index as mid = (left + right) / 2.
//* b. If arr[mid] is equal to the target, return mid as the index where the target is found.
//* c. If arr[mid] is less than the target, update left = mid + 1 to search in the right half of the array.
//* d. If arr[mid] is greater than the target, update right = mid - 1 to search in the left half of the array.
//* If the loop completes without finding the target, return a "not found" indication (e.g., -1).

//! PseudoCode

//* function binary_search(array,size, target):
//*     left = 0
//*     right = size

//*     while left <= right:
//*         mid = (left + right) / 2

//*         if array[mid] == target:
//*             return mid  // Found the target
//*         else if array[mid] < target:
//*             left = mid + 1  // Target is in the right half
//*         else:
//*             right = mid - 1  // Target is in the left half

//*     return not found

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int s = 0;
    int e = size;

    while (s <= size)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            cout << "Element found at Position : " << mid << endl;
            return 0;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
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

    binarySearch(arr, size, key);

    return 0;
}
