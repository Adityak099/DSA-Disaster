//Code to find smallest element in an array
#include <iostream>
using namespace std;

int minElement(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++) // Start from i = 1 bcz index 0 is already assigned;
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {3, 1, -40, 1, 50000, 9, -2, -6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element in array is " << minElement(arr, size);

    return 0;
}