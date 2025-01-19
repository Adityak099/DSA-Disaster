#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of unsorted array
        // int temp = arr[minIndex];
        // arr[minIndex] = arr[i];
        // arr[i] = temp;
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {5, 4, 2, 30, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}