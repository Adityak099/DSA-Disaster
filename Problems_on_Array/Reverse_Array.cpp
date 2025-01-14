#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reversed array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> reversed = reverseArray(arr);
    return 0;
}