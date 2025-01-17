// A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

/*Below code is for checking if a number is palindrome or not:*/
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
