#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to convert a decimal digit to binary.

vector<int> decimalToBinary(int decimal)
{
    vector<int> binary;

    if (decimal == 0)
    {
        binary.push_back(0);
    }
    else
    {
        while (decimal > 0)
        {
            binary.push_back(decimal % 2);
            decimal /= 2;
        }
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

int main()
{
    int decimal_digit;
    // Accept input from
    cout << "Enter a decimal digit: ";
    cin >> decimal_digit;

    vector<int> binary;

    if (decimal_digit == 0)
    {
        cout << "Binary representation is not defined for negative numbers." << endl;
    }
    else
    {
        binary = decimalToBinary(decimal_digit);
    }

    // Output
    cout << "The binary representation: ";
    for (int digit : binary)
    {
        cout << digit;
    }
    cout << endl;

    return 0;
}
