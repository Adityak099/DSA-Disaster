#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num)
{
    if (num < 0)
        return false; // Negative numbers are not palindromes

    int original = num;
    int reversed = 0;

    while (num > 0)
    {
        int digit = num % 10;             // Extract the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        num /= 10;                        // Remove the last digit
    }

    return original == reversed;
}

// Function to find all palindrome numbers in a range
vector<int> findPalindromesInRange(int start, int end)
{
    vector<int> palindromes;

    for (int i = start; i <= end; ++i)
    {
        if (isPalindrome(i))
        {
            palindromes.push_back(i); // Add to the list if it's a palindrome
        }
    }

    return palindromes;
}

int main()
{
    int start, end;

    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    // Find palindromes in the given range
    vector<int> palindromes = findPalindromesInRange(start, end);

    // Print the results
    cout << "Palindrome numbers between " << start << " and " << end << " are:\n";
    for (int num : palindromes)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
