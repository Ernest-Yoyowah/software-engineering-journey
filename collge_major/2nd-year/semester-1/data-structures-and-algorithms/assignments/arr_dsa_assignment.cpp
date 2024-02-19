#include <iostream>

// Function to accept input from the user and store numbers in an array
void acceptInput(int arr[], int size)
{
    std::cout << "Enter four numbers:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter number " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

// Function to display numbers in the original order
void displayOriginalOrder(int arr[], int size)
{
    std::cout << "Numbers in the order they were entered: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i];
        if (i < size - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

// Function to display numbers in reverse order
void displayReverseOrder(int arr[], int size)
{
    std::cout << "Numbers in reverse order: ";
    for (int i = size - 1; i >= 0; --i)
    {
        std::cout << arr[i];
        if (i > 0)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    const int SIZE = 4;
    int numbers[SIZE];

    // Step 1: Accept Input
    acceptInput(numbers, SIZE);

    // Step 2: Display Numbers in Original Order
    displayOriginalOrder(numbers, SIZE);

    // Step 3: Display Numbers in Reverse Order
    displayReverseOrder(numbers, SIZE);

    return 0;
}
