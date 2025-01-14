#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> small(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr;
}

int main()
{
    vector<int> arr = {2, 5, 66, -6, 0, 303, 8};
    vector<int> smallest = small(arr);
    cout << "Sorted array is : ";
    for (int num : smallest)
    {
        cout << num << " ";
    }
    cout << endl;

    int secondSmallest = smallest[1];                  // Second element in sorted array
    cout << "Second smallest element: " << secondSmallest << endl;
}
