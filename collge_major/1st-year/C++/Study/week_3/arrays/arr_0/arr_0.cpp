#include <iostream>

using namespace std;

int main()
{
    int index, arr[10];

    // Read in 10 elements
    cout << "Enter 10 Integers: ";
    for (index = 1; index < 11; index++)
    cin >> arr[index];
    cout << endl;

    cout << "The integers are ";
    for (index = 1; index < 11; index++)
    cout << arr[index] << " ";
    cout << endl;
    return 0;
}