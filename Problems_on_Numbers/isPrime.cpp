#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    bool flag = true;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << num << " is Prime" << endl;
    else
        cout << num << " is Not Prime" << endl;

    return 0;
}