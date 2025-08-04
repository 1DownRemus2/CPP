#include <iostream>
using namespace std;

int main()
{

    int num = 0;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        cout << endl;
        for (int j = 1; j <= num; j++)
        {
            cout << j;
        }
    }

    return 0;
}
