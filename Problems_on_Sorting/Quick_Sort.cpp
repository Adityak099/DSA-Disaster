// #include <bits/stdc++.h>
// using namespace std;

// // Function to partition the array on the basis of pivot element
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high]; // Pivot element
//     int i = low - 1;       // Index of smaller element

//     for (int j = low; j < high; j++)
//     {
//         // If current element is smaller than or equal to pivot
//         if (arr[j] <= pivot)
//         {
//             i++; // Increment index of smaller element
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// // Function to implement Quick Sort
// void quickSort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         // Partition the array
//         int pi = partition(arr, low, high);

//         // Recursively sort elements before and after partition
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main()
// {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     quickSort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Three median method
#include <iostream>
#include <algorithm> // For std::swap
using namespace std;

// Function to find the median of three elements
int medianOfThree(int arr[], int low, int high)
{
    int mid = low + (high - low) / 2;
    if (arr[low] > arr[mid])
        swap(arr[low], arr[mid]);
    if (arr[low] > arr[high])
        swap(arr[low], arr[high]);
    if (arr[mid] > arr[high])
        swap(arr[mid], arr[high]);
    // Use the median as the pivot
    swap(arr[mid], arr[high]);
    return arr[high];
}

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = medianOfThree(arr, low, high);
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Optimized Quick Sort function
void quickSort(int arr[], int low, int high)
{
    while (low < high)
    {
        // Partition the array
        int pi = partition(arr, low, high);

        // Tail recursion optimization:
        // Recur for the smaller partition and loop for the larger one
        if (pi - low < high - pi)
        {
            quickSort(arr, low, pi - 1);
            low = pi + 1; // Loop for the larger partition
        }
        else
        {
            quickSort(arr, pi + 1, high);
            high = pi - 1; // Loop for the larger partition
        }
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
