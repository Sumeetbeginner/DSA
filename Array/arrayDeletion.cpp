
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int deleteIndex = 2; // Index of the element to delete

    // Shift elements to cover the deleted element
    for (int i = deleteIndex; i < 4; ++i) {
        arr[i] = arr[i + 1];
    }

    // Print the modified array
    for (int i = 0; i < 4; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}

