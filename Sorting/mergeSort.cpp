
//? Best Case Time Complexity: O(n log n)
//? Average Case Time Complexity: O(n log n)
//? Worst Case Time Complexity: O(n log n)

//! Merge Sort is a sorting algorithm that divides an array into smaller halves, recursively sorts them, and then merges them back together in a sorted order.

#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{

    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; //! Temp Arrays

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] > b[j])
        {
            arr[k] = b[j];
            j++;
            k++;
        }
        else
        {
            arr[k] = a[i];
            i++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int mid = (l + r) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
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

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}