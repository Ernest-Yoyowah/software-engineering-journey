#include <iostream>

using namespace std;

void insertValue(int array[], int size, int index, int value)
{
    // Check if the index is valid
    if (index < 0 || index >= size)
    {
        cout << "Invalid index." << endl;
    }

    // Shift elements to the right starting from the end of the array
    for (int i = size - 1; i >= index; i--)
    {
        array[i] = array[i - 1];
    }
    // Insert the new value at the specified index
    array[index] = value;

    return;
}

int main()
{
    // Initial array
    const int initialSize = 4;
    int array[initialSize] = {8, 10, 12, 5}; // Initial Array

    // New array Size
    const int newSize = initialSize + 1;
    int newArray[newSize];

    // Copy the initial array to the new array
    for (int i = 0; i < newSize; i++)
    {
        newArray[i] = array[i];
    }

    // Display the initial state of the array
    cout << "Initial array: [";
    for (int i = 0; i < initialSize; i++)
    {
        cout << array[i];
        if (i < initialSize - 1)
        {
            cout << ",";
        }
    }
    cout << "]" << endl;

    // Insert the value 18 at index 2
    insertValue(newArray, newSize, 2, 18);

    // Display the modified array
    cout << "Modified array: [";
    for (int i = 0; i < newSize; i++)
    {
        cout << newArray[i];
        if (i < newSize - 1)
        {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}