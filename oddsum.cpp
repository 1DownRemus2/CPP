#include <iostream>
using namespace std;

int main()
{

    int num = 0;
    int sum = 0;

    cout << "Enter how many terms do you want to find the sum: ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {

        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    cout << "The sum of the odd numbers are: " << sum;
    return 0;
}