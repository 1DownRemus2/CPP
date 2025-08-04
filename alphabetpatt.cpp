#include <iostream>
using namespace std;

int main()
{

    int num = 0;
    char ch = 'A';

    cout << "Enter the letter till which you want to print the pattern: ";
    cin >> ch;

    num = (int)ch;
    int n = num;

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            cout << ch;
            (int)ch++;
        }
    }
}