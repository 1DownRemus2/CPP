#include <iostream>
using namespace std;

void maxmin(int arr[5])
{

    int max = 0, min = 0, i, j;

    for (i = 0; i < 5; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (j = 0; j < 5; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
        }
    }
    cout << "The maximum number in the array is: " << max << " and the index is: " << i << endl;
    cout << "The minimum number in the array is: " << min << " and the index is: " << j << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    maxmin(arr);

    return 0;
}