#include <iostream>
using namespace std;

int main()
{

    int num = 0;
    int n = 1;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << n;
            n++;
        }
        cout << endl;
        n = 1;
    }

    return 0;
}