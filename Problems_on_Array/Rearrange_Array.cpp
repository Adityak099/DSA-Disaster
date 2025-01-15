// Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {8, 7, 1, 6, 5, 9};
    int n = arr.size();
    sort(arr.begin(), arr.end());//Sorting the array
    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = n - 1; i >= n / 2; i--)
    {
        cout << arr[i] << " ";
    }
}