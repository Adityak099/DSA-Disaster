#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j]; // swapping
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    };
};

int main()
{
    int arr[] = {5, 4, 2, 30, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, size);
    cout << "The soorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "|"; // print each element
    }
}