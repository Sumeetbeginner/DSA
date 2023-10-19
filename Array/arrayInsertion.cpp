
#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {0, 1, 2, 3, 4}; //? Increase array Size

    //? Insert 7 at index 3

    for (int i = 5; i > 3; i--)
    {

        arr[i] = arr[i - 1];
    }

    arr[3] = 7;

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}