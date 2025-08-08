#include <iostream>
using namespace std;

int main()
{
    int n = 1, num = 0;
    cout << "Enter the number of rows: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    return 0;
}