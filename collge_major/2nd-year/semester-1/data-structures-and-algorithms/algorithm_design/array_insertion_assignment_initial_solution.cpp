#include <iostream>

void insertValue(int arr[], int size, int index, int value)
{
    // Check if the index is valid
    if (index < 0 || index >= size)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    // Shift elements to the right starting from the end of the array
    for (int i = size - 1; i > index; --i)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at the specified index
    arr[index] = value;
}

int main()
{
    // Array size (including space for insertion)
    const int size = 5;
    int array[size] = {8, 10, 12, 5}; // Initial array

    // Display the initial state of the array
    std::cout << "Initial array: [";
    for (int i = 0; i < size - 1; ++i)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << array[size - 1] << "]" << std::endl;

    // Insert the value 18 at index 2
    insertValue(array, size, 2, 18);

    // Display the modified array
    std::cout << "Modified array: [";
    for (int i = 0; i < size - 1; ++i)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << array[size - 1] << "]" << std::endl;

    return 0;
}
