#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        // key is variable which holds the value of current element being sorted, which is arr[i]
        int key = arr[i];
        // The variable j is initialized to i - 1, which is the index of the element just before the current element (key). This is because we need to compare the key with elements in the sorted part of the array, which are to the left of i.
        int j = i - 1;
        // shift the larger elements to the right
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // Place the key in its correct position;
        arr[j + 1] = key;
    }
};

int main()
{
    int arr[] = {5, 400, 2, 30, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " | ";
    }

    return 0;
}