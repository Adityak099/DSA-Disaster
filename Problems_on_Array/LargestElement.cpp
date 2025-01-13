// Code to find largest element in an array
#include <iostream>
#include <vector>
using namespace std;


int largestElement(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
};

int main()
{
    int arr[] = {2, 5, 66, -6, 0, 303, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Mil gya barka elementwa : " << largestElement(arr, size);
}
