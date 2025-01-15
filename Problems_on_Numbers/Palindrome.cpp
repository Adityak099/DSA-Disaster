// A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &str)
{
    int start = 0;              // Pointer to the start of the string
    int end = str.length() - 1; // Pointer to the end of the string

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false; // Characters don't match
        }
        start++;
        end--;
    }

    return true; // All characters matched
}

int main()
{
    string input;

    cout << "Enter a string to check if it is a palindrome: ";
    cin >> input;

    if (isPalindrome(input))
    {
        cout << "\"" << input << "\" is a palindrome." << endl;
    }
    else
    {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    // Negative numbers are not palindromes
    if (num < 0)
        return false;

    int original = num; // Store the original number
    int reversed = 0;

    while (num > 0)
    {
        int digit = num % 10;             // Extract the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        num = num / 10;                   // Remove the last digit
    }

    return original == reversed; // Check if original and reversed are the same
}

int main()
{
    int number;

    cout << "Enter a number to check if it is a palindrome: ";
    cin >> number;

    if (isPalindrome(number))
    {
        cout << number << " is a palindrome." << endl;
    }
    else
    {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
*/