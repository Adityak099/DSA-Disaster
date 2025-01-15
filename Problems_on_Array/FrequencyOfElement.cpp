#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element you wan to keep in the array = ";
    cin >> n;

    cout << "\nNow enter the elements here one by one: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n\nThe Array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "|";
    }

    // taking anothr array
    int flag[n] = {0};
    cout << "\n\nFrequency of every element of the sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if (flag[i] != 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    flag[j] = 1;
                }
            }
            if (count > 1 || count == 1)
            {
                cout << "\n"
                     << arr[i] << " occurs " << count << " times.";
            }
        }
    }
    return 0;
}

// Using STL:
/*
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    // loop through the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> frequency;
    for (int i = 0; i < n; i++)
    {
        // frequency[arr[i]] = frequency[arr[i]] + 1; or
        frequency[arr[i]]++;
    }

    // printing the element with their frequencies:
    for (auto it : frequency)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
*/
