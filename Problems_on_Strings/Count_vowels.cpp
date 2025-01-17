#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void countChar(string s)
{
    int v = 0, c = 0, space = 0, others = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            v++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            c++;
        }
        else if (isspace(s[i]))
        {
            space++;
        }
        else
        {
            others++;
        }
    }

    cout << "Vowels: " << v << endl;
    cout << "Consonants: " << c << endl;
    cout << "Spaces: " << space << endl;
    cout << "Others: " << others << endl;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    countChar(s);
}