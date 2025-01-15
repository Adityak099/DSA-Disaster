#include <iostream>
#include <vector>

using namespace std;

int sumOfArray(const vector<int> &arr)
{
    int sum = 0;
    for (int num : arr)
    {
        sum += num;
    }
    return sum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int sum = sumOfArray(arr);
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}

/*USING STL 'accumulate' METHOD:
std::accumulate:
    Part of the <numeric> library.
    Syntax: accumulate(start_pointer, end_pointer, initial_value).
    Here:
        start_pointer is arr (beginning of the array).
        end_pointer is arr + n (end of the array).
        initial_value is 0 (starting value for the summation).

#include <iostream>
#include <numeric> // For std::accumulate

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Use std::accumulate to calculate the sum
    int totalSum = std::accumulate(arr, arr + n, 0);

    std::cout << "The sum of all elements in the array is: " << totalSum << std::endl;

    return 0;
}

*/