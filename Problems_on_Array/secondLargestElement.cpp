#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> large(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr;
}

int main()
{
    vector<int> arr = {2, 5, 66, -6, 0, 303, 8};
    vector<int> largest = large(arr);
    cout << "Sorted array is : ";
    for (int num : largest)
    {
        cout << num << " ";
    }
    cout << endl;

    int secondLargest = largest[largest.size() - 2]; // Second last element in sorted array
    cout << "Second largest element: " << secondLargest << endl;
}
