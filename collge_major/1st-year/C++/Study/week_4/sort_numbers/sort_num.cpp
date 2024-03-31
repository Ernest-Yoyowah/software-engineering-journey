#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    // Array to store 5 numbers
    int numbers[5];
    // accept numbers
    cout << "Enter 5 numbers, one at a time";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    // Bubble Sort Algorithm
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                // Swap numbers[j] and numbers[j + 1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                // tie(numbers[j], numbers[j + 1]) = tie(numbers[j+1], numbers[j])
            }
        }
    }
    // Output: Displaying the sorted numbers in ascending order
    cout << "Numbers in ascending order: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}