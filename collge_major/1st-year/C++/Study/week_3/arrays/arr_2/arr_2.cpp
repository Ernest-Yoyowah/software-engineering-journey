#include <iostream>

using namespace std;

int main()
{
    int arr[10], i = 7, j = 2, k = 4;

    arr[0] = 1;
    arr[i] = 5;
    arr[j] = arr[i] + 3;
    arr[j + 1] = arr[i] + arr[0];
    arr[arr[j]] = 12;

    cout << arr[2] << endl;

    return 0;
}