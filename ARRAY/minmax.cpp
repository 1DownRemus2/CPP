#include <iostream>
using namespace std;

void maxmin(int arr[5])
{
    int maxVal = arr[0];
    int minVal = arr[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < 5; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    cout << "The maximum number in the array is: " 
         << maxVal << " and the index is: " << maxIndex << endl;
    cout << "The minimum number in the array is: " 
         << minVal << " and the index is: " << minIndex << endl;
}

int main()
{
    int arr[5] = {5,3,4,2,4};
    maxmin(arr);
    return 0;
}
