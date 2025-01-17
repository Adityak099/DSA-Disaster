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