#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter till what number do you want the sum: ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }

    cout << "The sum of the first " << num << " is: " << sum << endl;

    return 0;
}