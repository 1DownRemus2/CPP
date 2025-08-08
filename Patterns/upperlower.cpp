#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter the character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "The character is lowercase" << endl;
    }

    else
    {
        cout << "The character is Uppercase" << endl;
    }

    return 0;
}