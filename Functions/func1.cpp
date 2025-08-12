#include <iostream>
using namespace std;

void sumdig(int num)
{

    int digisum = 0, lastdig = 0;
    while (num > 0)
    {
        lastdig = num % 10;
        num = num / 10;
        digisum = lastdig + digisum;
    }

    cout << "The sum of the digits are: " << digisum;
}

int main()
{

    int num = 0;
    cout << "Enter the number: ";
    cin >> num;
    sumdig(num);
    return 0;
}
